import os

# จำนวน lab ของแต่ละสัปดาห์ (ตามเว็บจริง)
lab_counts = {
    1: 12,
    2: 10,
    3: 13,
    4: 12,
    5: 10,
    6: 10,
    7: 2
}

# ชื่อเนื้อหาของแต่ละสัปดาห์
topics = {
    1: "Control Flow & Decisions",
    2: "Loop Statement",
    3: "Structure",
    4: "Array",
    5: "Function",
    6: "Basic Pointer",
    7: "File Handling"
}

BASE = "BASIC"

os.makedirs(BASE, exist_ok=True)

for week in range(1, 8):
    week_folder = os.path.join(BASE, f"Week{week}")
    os.makedirs(week_folder, exist_ok=True)

    labs = lab_counts[week]

    for lab in range(1, labs + 1):

        filename = f"lab{week}_{lab}.c"
        filepath = os.path.join(week_folder, filename)

        if not os.path.exists(filepath):
            with open(filepath, "w", encoding="utf-8") as f:
                f.write(f"// Week {week} - {topics[week]}\n")
                f.write(f"// Lab {week}.{lab}\n\n")
                f.write("#include <stdio.h>\n\n")
                f.write("int main() {\n")
                f.write(f"    printf(\"Week {week} - Lab {week}.{lab}\\n\");\n")
                f.write("    return 0;\n")
                f.write("}\n")

        print(f"✔ Created: {filepath}")

print("\n🎉 สร้างโครงสร้างไฟล์ทั้งหมดเสร็จแล้ว!")
