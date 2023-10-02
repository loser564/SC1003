grades = {
    ('FS1', 1) : 45,
    ('FS1', 2) : 75,
    ('FS1', 3) : 25,
    ('FS1', 4) : 65,

    ('FS2', 1) : 75,
    ('FS2', 2) : 40,
    ('FS2', 3) : 70,
    ('FS2', 4) : 80 
}
def listGrades(dict,group):
    for n in range(1,5):
        print(dict[group, n]) 


listGrades(grades, input("Group: "))


