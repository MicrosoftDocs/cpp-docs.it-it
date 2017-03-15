---
title: "Contenitori STL/CLR | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "contenitori, STL/CLR"
  - "STL/CLR, contenitori"
ms.assetid: 34ca8031-2041-46b9-aed9-29082d1972ea
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Contenitori STL/CLR
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La libreria STL\/CLR presenta gli stessi contenitori individuati nella libreria C\+\+ standard, ma funziona nell'ambiente gestito di .NET Framework.  Se è già familiarità con la libreria di modelli standard \(STL\), STL\/CLR è il modo migliore per continuare a utilizzare le tecniche già sviluppate mentre si aggiorna il codice per Common Language Runtime \(CLR\).  
  
 In questo documento viene fornita una panoramica dei contenitori in STL\/CLR, ad esempio i requisiti per gli elementi contenitore, i tipi di elemento che è possibile inserire nei contenitori e problematiche legate alla proprietà con gli elementi nei contenitori.  Dove ritenuto opportuno vengono menzionate le differenze tra la libreria di modelli standard e STL\/CLR.  
  
## Requisiti per gli elementi contenitore  
 Tutti gli elementi inseriti nei contenitori STL devono rispettare alcune linee guida.  Per ulteriori informazioni, vedere [Requisiti degli elementi del contenitore STL\/CLR](../dotnet/requirements-for-stl-clr-container-elements.md).  
  
## Elementi contenitori validi  
 I contenitori STL\/CLR possono memorizzare uno di due tipi di elementi:  
  
-   Si occupa di tipi di riferimento.  
  
-   Tipi di riferimento.  
  
-   Tipi di valore unboxed.  
  
 Non è possibile inserire i tipi valore boxed in nessun contenitore STL\/CLR.  
  
### Si occupa di tipi di riferimento.  
 È possibile inserire un handle per un tipo di riferimento in un contenitore STL\/CLR.  Un handle in C\+\+ destinato a CLR è analogo ad un puntatore in C\+\+ nativo.  Per ulteriori informazioni, vedere [Operatore handle a oggetto \(^\)](../windows/handle-to-object-operator-hat-cpp-component-extensions.md).  
  
#### Esempio  
 Nell'esempio seguente viene illustrato come inserire un handle ad un oggetto dipendente in un [cliext::set](../dotnet/set-stl-clr.md).  
  
```  
// cliext_container_valid_reference_handle.cpp  
// compile with: /clr  
  
#include <cliext/set>  
  
using namespace cliext;  
using namespace System;  
  
ref class Employee  
{  
public:  
    // STL containers might require a public constructor, so it  
    // is a good idea to define one.  
    Employee() :  
        name(nullptr),  
        employeeNumber(0) { }  
  
    // All STL containers require a public copy constructor.  
    Employee(const Employee% orig) :  
        name(orig.name),  
        employeeNumber(orig.employeeNumber) { }  
  
    // All STL containers require a public assignment operator.  
    Employee% operator=(const Employee% orig)  
    {  
        if (this != %orig)  
        {  
            name = orig.name;  
            employeeNumber = orig.employeeNumber;  
        }  
  
        return *this;  
    }  
  
    // All STL containers require a public destructor.  
    ~Employee() { }  
  
    // Associative containers such as maps and sets  
    // require a comparison operator to be defined  
    // to determine proper ordering.  
    bool operator<(const Employee^ rhs)  
    {  
        return (employeeNumber < rhs->employeeNumber);  
    }  
  
    // The employee's name.  
    property String^ Name  
    {  
        String^ get() { return name; }  
        void set(String^ value) { name = value; }  
    }  
  
    // The employee's employee number.  
    property int EmployeeNumber  
    {  
        int get() { return employeeNumber; }  
        void set(int value) { employeeNumber = value; }  
    }  
  
private:  
    String^ name;  
    int employeeNumber;  
};  
  
int main()  
{  
    // Create a new employee object.  
    Employee^ empl1419 = gcnew Employee();  
    empl1419->Name = L"Darin Lockert";  
    empl1419->EmployeeNumber = 1419;  
  
    // Add the employee to the set of all employees.  
    set<Employee^>^ emplSet = gcnew set<Employee^>();  
    emplSet->insert(empl1419);  
  
    // List all employees of the company.  
    for each (Employee^ empl in emplSet)  
    {  
        Console::WriteLine("Employee Number {0}: {1}",  
            empl->EmployeeNumber, empl->Name);  
    }  
  
    return 0;  
}  
```  
  
### Tipi di riferimento  
 È anche possibile inserire un tipo di riferimento \(anziché un handle per un tipo di riferimento\) in un contenitore STL\/CLR.  La differenza principale consiste nel fatto che quando un contenitore di tipi di riferimento viene eliminato, il distruttore viene chiamato per tutti gli elementi contenuti nel contenitore.  In un contenitore di handle ai tipi di riferimento, i distruttori per questi elementi non verranno chiamati.  
  
#### Esempio  
 Nell'esempio seguente viene illustrato come inserire un oggetto dipendente in un `cliext::set`.  
  
```  
// cliext_container_valid_reference.cpp  
// compile with: /clr  
  
#include <cliext/set>  
  
using namespace cliext;  
using namespace System;  
  
ref class Employee  
{  
public:  
    // STL containers might require a public constructor, so it  
    // is a good idea to define one.  
    Employee() :  
        name(nullptr),  
        employeeNumber(0) { }  
  
    // All STL containers require a public copy constructor.  
    Employee(const Employee% orig) :  
        name(orig.name),  
        employeeNumber(orig.employeeNumber) { }  
  
    // All STL containers require a public assignment operator.  
    Employee% operator=(const Employee% orig)  
    {  
        if (this != %orig)  
        {  
            name = orig.name;  
            employeeNumber = orig.employeeNumber;  
        }  
  
        return *this;  
    }  
  
    // All STL containers require a public destructor.  
    ~Employee() { }  
  
    // Associative containers such as maps and sets  
    // require a comparison operator to be defined  
    // to determine proper ordering.  
    bool operator<(const Employee^ rhs)  
    {  
        return (employeeNumber < rhs->employeeNumber);  
    }  
  
    // The employee's name.  
    property String^ Name  
    {  
        String^ get() { return name; }  
        void set(String^ value) { name = value; }  
    }  
  
    // The employee's employee number.  
    property int EmployeeNumber  
    {  
        int get() { return employeeNumber; }  
        void set(int value) { employeeNumber = value; }  
    }  
  
private:  
    String^ name;  
    int employeeNumber;  
};  
  
int main()  
{  
    // Create a new employee object.  
    Employee empl1419;  
    empl1419.Name = L"Darin Lockert";  
    empl1419.EmployeeNumber = 1419;  
  
    // Add the employee to the set of all employees.  
    set<Employee>^ emplSet = gcnew set<Employee>();  
    emplSet->insert(empl1419);  
  
    // List all employees of the company.  
    for each (Employee^ empl in emplSet)  
    {  
        Console::WriteLine("Employee Number {0}: {1}",  
            empl->EmployeeNumber, empl->Name);  
    }  
  
    return 0;  
}  
```  
  
### Tipi di valore unboxed.  
 È inoltre possibile inserire un tipo di valore unboxed in un contenitore STL\/CLR.  Un tipo di valore unboxed è un tipo di valore di cui non è stato eseguito il *boxing* in un tipo di riferimento.  
  
 Un elemento di tipo valore può essere uno dei tipi di valore standard, come ad esempio `int`, oppure può essere un tipo di valore definito dall'utente, come `value class`.  Per ulteriori informazioni, vedere [Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md).  
  
#### Esempio  
 Nell'esempio seguente viene modificato il primo esempio rendendo la classe dipendente un tipo di valore.  Questo tipo di valore viene quindi inserito solo in un `cliext::set` come nel primo esempio.  
  
```  
// cliext_container_valid_valuetype.cpp  
// compile with: /clr  
  
#include <cliext/set>  
  
using namespace cliext;  
using namespace System;  
  
value class Employee  
{  
public:  
    // Associative containers such as maps and sets  
    // require a comparison operator to be defined  
    // to determine proper ordering.  
    bool operator<(const Employee^ rhs)  
    {  
        return (employeeNumber < rhs->employeeNumber);  
    }  
  
    // The employee's name.  
    property String^ Name  
    {  
        String^ get() { return name; }  
        void set(String^ value) { name = value; }  
    }  
  
    // The employee's employee number.  
    property int EmployeeNumber  
    {  
        int get() { return employeeNumber; }  
        void set(int value) { employeeNumber = value; }  
    }  
  
private:  
    String^ name;  
    int employeeNumber;  
};  
  
int main()  
{  
    // Create a new employee object.  
    Employee empl1419;  
    empl1419.Name = L"Darin Lockert";  
    empl1419.EmployeeNumber = 1419;  
  
    // Add the employee to the set of all employees.  
    set<Employee>^ emplSet = gcnew set<Employee>();  
    emplSet->insert(empl1419);  
  
    // List all employees of the company.  
    for each (Employee empl in emplSet)  
    {  
        Console::WriteLine("Employee Number {0}: {1}",  
            empl.EmployeeNumber, empl.Name);  
    }  
  
    return 0;  
}  
```  
  
 Se si tenta di inserire un handle per un tipo di valore in un contenitore viene generato [Errore del compilatore C3225](../error-messages/compiler-errors-2/compiler-error-c3225.md).  
  
### Implicazioni di prestazioni e di memoria.  
 È necessario considerare diversi fattori per stabilire se utilizzare handle per fare riferimento ai tipi o ai tipi di valore come elementi contenitore.  Se si decide di utilizzare i tipi di valore, ricordare che una copia dell'elemento viene eseguita ogni volta che viene inserito un elemento nel contenitore.  Per piccoli oggetti, non dovrebbe rappresentare un problema, ma se gli oggetti che vengono inseriti sono di grandi dimensioni, le prestazioni potrebbero risentirne.  Inoltre, se si utilizzano tipi di valore, è impossibile memorizzare un elemento in più contenitori nello stesso momento poiché ciascun contenitore avrebbe la propria copia dell'elemento.  
  
 Se invece si decide di utilizzare un handle ai tipi di riferimento, le prestazioni potrebbero migliorare in quanto non è necessario fare una copia dell'elemento quando viene inserito nel contenitore.  Inoltre, a differenza dei tipi di valore, lo stesso elemento può esistere in più contenitori.  Tuttavia, se si decide di utilizzare handle, è necessario prestare particolare attenzione ad assicurarsi che un handle sia valido e che l'oggetto a cui fa riferimento non sia stato eliminato in un altro punto del programma.  
  
## Problemi di proprietà con i contenitori  
 I contenitori in STL\/CLR lavorano sulla semantica del valore.  Ogni volta che si inserisce un elemento in un contenitore, viene inserita una copia di tale elemento.  Se si desidera ottenere la semantica simile al riferimento è possibile inserire un handle ad un oggetto anziché l'oggetto stesso.  
  
 Quando si chiama il metodo clear oppure il metodo erase su un contenitore di oggetti handle, gli oggetti a cui gli handle fanno riferimento non vengono rimossi dalla memoria.  È necessario eliminare esplicitamente l'oggetto, oppure, poiché questi oggetti risiedono nell'heap gestito, consentire al Garbage Collector di liberare la memoria una volta determinato che l'oggetto non viene più utilizzato.  
  
## Vedere anche  
 [Libreria di modelli standard](../misc/standard-template-library.md)