---
title: Contenitori STL/CLR | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs: C++
helpviewer_keywords:
- STL/CLR, containers
- containers, STL/CLR
ms.assetid: 34ca8031-2041-46b9-aed9-29082d1972ea
caps.latest.revision: "14"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 1b8aa8ef5b1425d4aa41b1811dca5ec5d56acd1c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="stlclr-containers"></a>Contenitori STL/CLR
La libreria STL/CLR presenta gli stessi contenitori presenti nella libreria Standard C++, ma viene eseguito all'interno dell'ambiente gestito di .NET Framework. Se si ha già familiarità con la libreria Standard C++, STL/CLR è il modo migliore per continuare a utilizzare le tecniche che è già stato creato durante l'aggiornamento del codice a common language runtime (CLR) di destinazione.  
  
 In questo documento viene fornita una panoramica dei contenitori in STL/CLR, ad esempio i requisiti per gli elementi contenitore, i tipi di elementi che è possibile inserire nei contenitori e i problemi di proprietà con gli elementi nei contenitori. Dove appropriato, sono indicate le differenze tra la nativo della libreria Standard C++ e STL/CLR.  
  
## <a name="requirements-for-container-elements"></a>Requisiti per gli elementi contenitore  
 Tutti gli elementi inseriti in contenitori della libreria Standard C++ devono rispettare alcune linee guida. Per ulteriori informazioni, vedere [requisiti per gli elementi contenitore STL/CLR](../dotnet/requirements-for-stl-clr-container-elements.md).  
  
## <a name="valid-container-elements"></a>Elementi di contenitore validi  
 I contenitori STL/CLR possono contenere uno di due tipi di elementi:  
  
-   Handle a tipi di riferimento.  
  
-   Tipi di riferimento.  
  
-   Tipi di valore unboxed.  
  
 Non è possibile inserire i tipi valore boxed nei contenitori STL/CLR.  
  
### <a name="handles-to-reference-types"></a>Handle a tipi di riferimento  
 È possibile inserire un handle per un tipo di riferimento in un contenitore STL/CLR. Un handle in C++ destinato a CLR è analogo a un puntatore in C++ nativo. Per ulteriori informazioni, vedere [operatore Handle a oggetto (^)](../windows/handle-to-object-operator-hat-cpp-component-extensions.md).  
  
#### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come inserire un handle a un oggetto dipendente in un [cliext:: set](../dotnet/set-stl-clr.md).  
  
```  
// cliext_container_valid_reference_handle.cpp  
// compile with: /clr  
  
#include <cliext/set>  
  
using namespace cliext;  
using namespace System;  
  
ref class Employee  
{  
public:  
    // C++ Standard Library containers might require a public constructor, so it  
    // is a good idea to define one.  
    Employee() :  
        name(nullptr),  
        employeeNumber(0) { }  
  
    // All C++ Standard Library containers require a public copy constructor.  
    Employee(const Employee% orig) :  
        name(orig.name),  
        employeeNumber(orig.employeeNumber) { }  
  
    // All C++ Standard Library containers require a public assignment operator.  
    Employee% operator=(const Employee% orig)  
    {  
        if (this != %orig)  
        {  
            name = orig.name;  
            employeeNumber = orig.employeeNumber;  
        }  
  
        return *this;  
    }  
  
    // All C++ Standard Library containers require a public destructor.  
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
  
### <a name="reference-types"></a>Tipi riferimento  
 È anche possibile inserire un tipo di riferimento (anziché un handle per un tipo di riferimento) in un contenitore STL/CLR. La differenza principale consiste nel fatto che quando un contenitore di tipi di riferimento viene eliminato, viene chiamato il distruttore per tutti gli elementi contenuti nel contenitore. In un contenitore di handle ai tipi di riferimento, i distruttori per questi elementi non vengono chiamati.  
  
#### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come inserire un oggetto Dipendente in un oggetto `cliext::set`.  
  
```  
// cliext_container_valid_reference.cpp  
// compile with: /clr  
  
#include <cliext/set>  
  
using namespace cliext;  
using namespace System;  
  
ref class Employee  
{  
public:  
    // C++ Standard Library containers might require a public constructor, so it  
    // is a good idea to define one.  
    Employee() :  
        name(nullptr),  
        employeeNumber(0) { }  
  
    // All C++ Standard Library containers require a public copy constructor.  
    Employee(const Employee% orig) :  
        name(orig.name),  
        employeeNumber(orig.employeeNumber) { }  
  
    // All C++ Standard Library containers require a public assignment operator.  
    Employee% operator=(const Employee% orig)  
    {  
        if (this != %orig)  
        {  
            name = orig.name;  
            employeeNumber = orig.employeeNumber;  
        }  
  
        return *this;  
    }  
  
    // All C++ Standard Library containers require a public destructor.  
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
  
### <a name="unboxed-value-types"></a>Tipi di valore unboxed  
 È inoltre possibile inserire un tipo di valore unboxed in un contenitore STL/CLR. Un tipo di valore unboxed è un tipo di valore che non è stato *boxed* in un tipo di riferimento.  
  
 Un elemento di tipo valore può essere uno dei tipi di valore standard, come ad esempio `int`, oppure può essere un tipo di valore definito dall'utente, ad esempio `value class`. Per ulteriori informazioni, vedere [classi e struct](../windows/classes-and-structs-cpp-component-extensions.md)  
  
#### <a name="example"></a>Esempio  
 Nell'esempio seguente viene modificato il primo esempio rendendo la classe Employee un tipo di valore. Questo tipo di valore viene quindi inserito in un oggetto `cliext::set` come nel primo esempio.  
  
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
  
 Se si tenta di inserire un handle a un tipo di valore in un contenitore, [errore del compilatore C3225](../error-messages/compiler-errors-2/compiler-error-c3225.md) viene generato.  
  
### <a name="performance-and-memory-implications"></a>Implicazioni con le prestazioni e la memoria  
 È necessario considerare diversi fattori per stabilire se utilizzare gli handle ai tipi di riferimento o ai tipi di valore come elementi di contenitore. Se si decide di utilizzare i tipi di valore, ricordare che viene eseguita una copia dell'elemento ogni volta che viene inserito un elemento nel contenitore. Per quanto riguarda gli oggetti piccoli, ciò non dovrebbe rappresentare un problema, ma se gli oggetti che vengono inseriti sono di grandi dimensioni, le prestazioni potrebbero risentirne. Inoltre, se si utilizzano i tipi di valore, è impossibile memorizzare un elemento in più contenitori nello stesso momento poiché ciascun contenitore avrebbe la propria copia dell'elemento.  
  
 Se invece si decide di utilizzare un handle ai tipi di riferimento, le prestazioni potrebbero migliorare in quanto non è necessario fare una copia dell'elemento quando viene inserito nel contenitore. Inoltre, a differenza dei tipi di valore, lo stesso elemento può esistere in più contenitori. Tuttavia, se si decide di utilizzare gli handle, è necessario prestare particolare attenzione ad assicurarsi che un handle sia valido e che l'oggetto a cui fa riferimento non sia stato eliminato in un altro punto del programma.  
  
## <a name="ownership-issues-with-containers"></a>Problemi di proprietà con i contenitori  
 I contenitori in STL/CLR lavorano sulla semantica del valore. Ogni volta che si inserisce un elemento in un contenitore, viene inserita una copia di tale elemento. Se si desidera ottenere la semantica simile al riferimento, è possibile inserire un handle a un oggetto anziché l'oggetto stesso.  
  
 Quando si chiama il metodo clear o il metodo erase di un contenitore di oggetti handle, gli oggetti a cui gli handle fanno riferimento non vengono rimossi dalla memoria. È necessario eliminare esplicitamente l'oggetto, oppure, poiché questi oggetti risiedono nell'heap gestito, consentire a Garbage Collector di liberare la memoria una volta determinato che l'oggetto non viene più utilizzato.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)