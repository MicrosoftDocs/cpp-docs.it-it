---
title: Accesso ai dati tramite ADO.NET (C + + CLI) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ADO.NET [C++]
- .NET Framework [C++], data access
- databases [C++], accessing in C++
- data access [C++], ADO.NET
- data [C++], ADO.NET
- native strings [C++]
- ADO.NET [C++], marshaling ANSI strings
- strings [C++], ADO.NET
- BSTRs, strings
- ADO.NET [C++], marshaling BSTR strings
- strings [C++], marshaling BSTR strings
- ADO.NET [C++], marshaling Unicode strings
- Unicode [C++], strings
- strings [C++], Unicode
- VARIANT, marshaling
- ADO.NET [C++], marshaling VARIANT types
- VARIANT
- SAFEARRAY, marshaling
- ADO.NET [C++], marshaling SAFEARRAY types
ms.assetid: b0cd987d-1ea7-4f76-ba01-cbd52503d06d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 025c6bc072f85a1075abdbd03f3567622c3fa40d
ms.sourcegitcommit: 27be37ae07ee7b657a54d23ed34438220d977fdc
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/18/2018
ms.locfileid: "39110286"
---
# <a name="data-access-using-adonet-ccli"></a>Accesso ai dati tramite ADO.NET (C++/CLI)
ADO.NET è l'API di .NET Framework per accedere ai dati e offre potenza e facilità di utilizzo non corrispondente da soluzioni di accesso dati precedenti. Questa sezione descrive alcuni dei problemi relativi ad ADO.NET che sono univoche per gli utenti di Visual C++, ad esempio il marshalling dei tipi nativi.  
  
 ADO.NET viene eseguito in Common Language Runtime (CLR). Pertanto, qualsiasi applicazione che interagisce con ADO.NET deve inoltre puntare a Common Language Runtime. Tuttavia, che significa che le applicazioni native non è possibile usare ADO.NET. Questi esempi verranno illustrato come interagire con un database ADO.NET da codice nativo.  
  
## <a name="marshal_ansi"></a> Effettuare il marshalling di stringhe ANSI per ADO.NET
Viene illustrato come aggiungere una stringa nativa (`char *`) a un database e come effettuare il marshalling una <xref:System.String?displayProperty=fullName> da un database in una stringa nativa.  
  
### <a name="example"></a>Esempio  
 In questo esempio, la classe DatabaseClass viene creata per interagire con ADO.NET <xref:System.Data.DataTable> oggetto. Si noti che questa classe è un codice C++ nativo `class` (rispetto a un `ref class` o `value class`). Ciò è necessario perché si desidera utilizzare questa classe dal codice nativo e non è possibile utilizzare i tipi gestiti nel codice nativo. Questa classe verrà compilata per il CLR, come indicato dal `#pragma managed` direttiva che precede la dichiarazione di classe. Per altre informazioni su questa direttiva, vedere [managed, unmanaged](../preprocessor/managed-unmanaged.md).  
  
 Si noti il membro privato della classe DatabaseClass: `gcroot<DataTable ^> table`. Poiché i tipi nativi non possono contenere tipi gestiti, il `gcroot` parola chiave è necessaria. Per ulteriori informazioni sul `gcroot`, vedere [procedura: dichiarare handle in tipi nativi](../dotnet/how-to-declare-handles-in-native-types.md).  
  
 Il resto del codice in questo esempio è codice C++ nativo, come indicato dal `#pragma unmanaged` precedente direttiva `main`. In questo esempio stiamo creando una nuova istanza della DatabaseClass e chiamarne i metodi per creare una tabella e inserire alcune righe nella tabella. Si noti che le stringhe C++ native vengono passate come valori per la colonna di database StringCol del database. All'interno di DatabaseClass, queste stringhe vengono effettuato il marshalling a stringhe gestite tramite la funzionalità di marshalling trovata nel <xref:System.Runtime.InteropServices?displayProperty=fullName> dello spazio dei nomi. In particolare, il metodo <xref:System.Runtime.InteropServices.Marshal.PtrToStringAnsi%2A> viene usato per effettuare il marshalling una `char *` a un <xref:System.String>e il metodo <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalAnsi%2A> viene utilizzato per effettuare il marshalling una <xref:System.String> per un `char *`.  
  
> [!NOTE]
>  La memoria allocata dalle <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalAnsi%2A> deve essere deallocata chiamando <xref:System.Runtime.InteropServices.Marshal.FreeHGlobal%2A> o `GlobalFree`.  
  
```cpp  
// adonet_marshal_string_native.cpp  
// compile with: /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll  
#include <comdef.h>  
#include <gcroot.h>  
#include <iostream>  
using namespace std;  
  
#using <System.Data.dll>  
using namespace System;  
using namespace System::Data;  
using namespace System::Runtime::InteropServices;  
  
#define MAXCOLS 100  
  
#pragma managed  
class DatabaseClass  
{  
public:  
    DatabaseClass() : table(nullptr) { }  
  
    void AddRow(char *stringColValue)  
    {  
        // Add a row to the table.  
        DataRow ^row = table->NewRow();  
        row["StringCol"] = Marshal::PtrToStringAnsi(  
            (IntPtr)stringColValue);  
        table->Rows->Add(row);  
    }  
  
    void CreateAndPopulateTable()  
    {  
        // Create a simple DataTable.  
        table = gcnew DataTable("SampleTable");  
  
        // Add a column of type String to the table.  
        DataColumn ^column1 = gcnew DataColumn("StringCol",  
            Type::GetType("System.String"));  
        table->Columns->Add(column1);  
    }  
  
    int GetValuesForColumn(char *dataColumn, char **values,  
        int valuesLength)  
    {  
        // Marshal the name of the column to a managed  
        // String.  
        String ^columnStr = Marshal::PtrToStringAnsi(  
                (IntPtr)dataColumn);  
  
        // Get all rows in the table.  
        array<DataRow ^> ^rows = table->Select();  
        int len = rows->Length;  
        len = (len > valuesLength) ? valuesLength : len;  
        for (int i = 0; i < len; i++)  
        {  
            // Marshal each column value from a managed string  
            // to a char *.  
            values[i] = (char *)Marshal::StringToHGlobalAnsi(  
                (String ^)rows[i][columnStr]).ToPointer();  
        }  
  
        return len;  
    }  
  
private:  
    // Using gcroot, you can use a managed type in  
    // a native class.  
    gcroot<DataTable ^> table;  
};  
  
#pragma unmanaged  
int main()  
{  
    // Create a table and add a few rows to it.  
    DatabaseClass *db = new DatabaseClass();  
    db->CreateAndPopulateTable();  
    db->AddRow("This is string 1.");  
    db->AddRow("This is string 2.");  
  
    // Now retrieve the rows and display their contents.  
    char *values[MAXCOLS];  
    int len = db->GetValuesForColumn(  
        "StringCol", values, MAXCOLS);  
    for (int i = 0; i < len; i++)  
    {  
        cout << "StringCol: " << values[i] << endl;  
  
        // Deallocate the memory allocated using  
        // Marshal::StringToHGlobalAnsi.  
        GlobalFree(values[i]);  
    }  
  
    delete db;  
  
    return 0;  
}  
```  
  
```Output  
StringCol: This is string 1.  
StringCol: This is string 2.  
```  
  
### <a name="compiling-the-code"></a>Compilazione del codice  
  
-   Per compilare il codice dalla riga di comando, salvare l'esempio di codice in un file denominato adonet_marshal_string_native. cpp e immettere l'istruzione seguente:  
  
    ```  
    cl /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll adonet_marshal_string_native.cpp  
    ```  

## <a name="marshal_bstr"></a> Effettuare il marshalling di stringhe BSTR per ADO.NET
Di seguito viene illustrato come aggiungere una stringa di COM (`BSTR`) a un database e come effettuare il marshalling di una <xref:System.String?displayProperty=fullName> da un database a un `BSTR`.  
  
### <a name="example"></a>Esempio  
 In questo esempio, la classe DatabaseClass viene creata per interagire con ADO.NET <xref:System.Data.DataTable> oggetto. Si noti che questa classe è un codice C++ nativo `class` (rispetto a un `ref class` o `value class`). Ciò è necessario perché si desidera utilizzare questa classe dal codice nativo e non è possibile utilizzare i tipi gestiti nel codice nativo. Questa classe verrà compilata per il CLR, come indicato dal `#pragma managed` direttiva che precede la dichiarazione di classe. Per altre informazioni su questa direttiva, vedere [managed, unmanaged](../preprocessor/managed-unmanaged.md).  
  
 Si noti il membro privato della classe DatabaseClass: `gcroot<DataTable ^> table`. Poiché i tipi nativi non possono contenere tipi gestiti, il `gcroot` parola chiave è necessaria. Per ulteriori informazioni sul `gcroot`, vedere [procedura: dichiarare handle in tipi nativi](../dotnet/how-to-declare-handles-in-native-types.md).  
  
 Il resto del codice in questo esempio è codice C++ nativo, come indicato dal `#pragma unmanaged` precedente direttiva `main`. In questo esempio stiamo creando una nuova istanza della DatabaseClass e chiamarne i metodi per creare una tabella e inserire alcune righe nella tabella. Si noti che le stringhe COM vengono passate come valori per la colonna di database StringCol del database. All'interno di DatabaseClass, queste stringhe vengono effettuato il marshalling a stringhe gestite tramite la funzionalità di marshalling trovata nel <xref:System.Runtime.InteropServices?displayProperty=fullName> dello spazio dei nomi. In particolare, il metodo <xref:System.Runtime.InteropServices.Marshal.PtrToStringBSTR%2A> viene usato per effettuare il marshalling una `BSTR` a un <xref:System.String>e il metodo <xref:System.Runtime.InteropServices.Marshal.StringToBSTR%2A> viene utilizzato per effettuare il marshalling una <xref:System.String> per un `BSTR`.  
  
> [!NOTE]
>  La memoria allocata dalle <xref:System.Runtime.InteropServices.Marshal.StringToBSTR%2A> deve essere deallocata chiamando <xref:System.Runtime.InteropServices.Marshal.FreeBSTR%2A> o `SysFreeString`.  
  
``` cpp 
// adonet_marshal_string_bstr.cpp  
// compile with: /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll  
#include <comdef.h>  
#include <gcroot.h>  
#include <iostream>  
using namespace std;  
  
#using <System.Data.dll>  
using namespace System;  
using namespace System::Data;  
using namespace System::Runtime::InteropServices;  
  
#define MAXCOLS 100  
  
#pragma managed  
class DatabaseClass  
{  
public:  
    DatabaseClass() : table(nullptr) { }  
  
    void AddRow(BSTR stringColValue)  
    {  
        // Add a row to the table.  
        DataRow ^row = table->NewRow();  
        row["StringCol"] = Marshal::PtrToStringBSTR(  
            (IntPtr)stringColValue);  
        table->Rows->Add(row);  
    }  
  
    void CreateAndPopulateTable()  
    {  
        // Create a simple DataTable.  
        table = gcnew DataTable("SampleTable");  
  
        // Add a column of type String to the table.  
        DataColumn ^column1 = gcnew DataColumn("StringCol",  
            Type::GetType("System.String"));  
        table->Columns->Add(column1);  
    }  
  
    int GetValuesForColumn(BSTR dataColumn, BSTR *values,  
        int valuesLength)  
    {  
        // Marshal the name of the column to a managed  
        // String.  
        String ^columnStr = Marshal::PtrToStringBSTR(  
                (IntPtr)dataColumn);  
  
        // Get all rows in the table.  
        array<DataRow ^> ^rows = table->Select();  
        int len = rows->Length;  
        len = (len > valuesLength) ? valuesLength : len;  
        for (int i = 0; i < len; i++)  
        {  
            // Marshal each column value from a managed string  
            // to a BSTR.  
            values[i] = (BSTR)Marshal::StringToBSTR(  
                (String ^)rows[i][columnStr]).ToPointer();  
        }  
  
        return len;  
    }  
  
private:  
    // Using gcroot, you can use a managed type in  
    // a native class.  
    gcroot<DataTable ^> table;  
};  
  
#pragma unmanaged  
int main()  
{  
    // Create a table and add a few rows to it.  
    DatabaseClass *db = new DatabaseClass();  
    db->CreateAndPopulateTable();  
  
    BSTR str1 = SysAllocString(L"This is string 1.");  
    db->AddRow(str1);  
  
    BSTR str2 = SysAllocString(L"This is string 2.");  
    db->AddRow(str2);  
  
    // Now retrieve the rows and display their contents.  
    BSTR values[MAXCOLS];  
    BSTR str3 = SysAllocString(L"StringCol");  
    int len = db->GetValuesForColumn(  
        str3, values, MAXCOLS);  
    for (int i = 0; i < len; i++)  
    {  
        wcout << "StringCol: " << values[i] << endl;  
  
        // Deallocate the memory allocated using  
        // Marshal::StringToBSTR.  
        SysFreeString(values[i]);  
    }  
  
    SysFreeString(str1);  
    SysFreeString(str2);  
    SysFreeString(str3);  
    delete db;  
  
    return 0;  
}  
```  
  
```Output  
StringCol: This is string 1.  
StringCol: This is string 2.  
```  
  
### <a name="compiling-the-code"></a>Compilazione del codice  
  
-   Per compilare il codice dalla riga di comando, salvare l'esempio di codice in un file denominato adonet_marshal_string_native. cpp e immettere l'istruzione seguente:  
  
    ```  
    cl /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll adonet_marshal_string_native.cpp  
    ```  

## <a name="marshal_unicode"></a> Effettuare il marshalling di stringhe Unicode per ADO.NET
Viene illustrato come aggiungere una stringa Unicode nativa (`wchar_t *`) a un database e come effettuare il marshalling una <xref:System.String?displayProperty=fullName> da un database in una stringa Unicode nativo.  
  
### <a name="example"></a>Esempio  
 In questo esempio, la classe DatabaseClass viene creata per interagire con ADO.NET <xref:System.Data.DataTable> oggetto. Si noti che questa classe è un codice C++ nativo `class` (rispetto a un `ref class` o `value class`). Ciò è necessario perché si desidera utilizzare questa classe dal codice nativo e non è possibile utilizzare i tipi gestiti nel codice nativo. Questa classe verrà compilata per il CLR, come indicato dal `#pragma managed` direttiva che precede la dichiarazione di classe. Per altre informazioni su questa direttiva, vedere [managed, unmanaged](../preprocessor/managed-unmanaged.md).  
  
 Si noti il membro privato della classe DatabaseClass: `gcroot<DataTable ^> table`. Poiché i tipi nativi non possono contenere tipi gestiti, il `gcroot` parola chiave è necessaria. Per ulteriori informazioni sul `gcroot`, vedere [procedura: dichiarare handle in tipi nativi](../dotnet/how-to-declare-handles-in-native-types.md).  
  
 Il resto del codice in questo esempio è codice C++ nativo, come indicato dal `#pragma unmanaged` precedente direttiva `main`. In questo esempio stiamo creando una nuova istanza della DatabaseClass e chiamarne i metodi per creare una tabella e inserire alcune righe nella tabella. Si noti che le stringhe Unicode C++ vengono passate come valori per la colonna di database StringCol del database. All'interno di DatabaseClass, queste stringhe vengono effettuato il marshalling a stringhe gestite tramite la funzionalità di marshalling trovata nel <xref:System.Runtime.InteropServices?displayProperty=fullName> dello spazio dei nomi. In particolare, il metodo <xref:System.Runtime.InteropServices.Marshal.PtrToStringUni%2A> viene usato per effettuare il marshalling una `wchar_t *` a un <xref:System.String>e il metodo <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalUni%2A> viene utilizzato per effettuare il marshalling una <xref:System.String> per un `wchar_t *`.  
  
> [!NOTE]
>  La memoria allocata dalle <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalUni%2A> deve essere deallocata chiamando <xref:System.Runtime.InteropServices.Marshal.FreeHGlobal%2A> o `GlobalFree`.  
  
```cpp  
// adonet_marshal_string_wide.cpp  
// compile with: /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll  
#include <comdef.h>  
#include <gcroot.h>  
#include <iostream>  
using namespace std;  
  
#using <System.Data.dll>  
using namespace System;  
using namespace System::Data;  
using namespace System::Runtime::InteropServices;  
  
#define MAXCOLS 100  
  
#pragma managed  
class DatabaseClass  
{  
public:  
    DatabaseClass() : table(nullptr) { }  
  
    void AddRow(wchar_t *stringColValue)  
    {  
        // Add a row to the table.  
        DataRow ^row = table->NewRow();  
        row["StringCol"] = Marshal::PtrToStringUni(  
            (IntPtr)stringColValue);  
        table->Rows->Add(row);  
    }  
  
    void CreateAndPopulateTable()  
    {  
        // Create a simple DataTable.  
        table = gcnew DataTable("SampleTable");  
  
        // Add a column of type String to the table.  
        DataColumn ^column1 = gcnew DataColumn("StringCol",  
            Type::GetType("System.String"));  
        table->Columns->Add(column1);  
    }  
  
    int GetValuesForColumn(wchar_t *dataColumn, wchar_t **values,  
        int valuesLength)  
    {  
        // Marshal the name of the column to a managed  
        // String.  
        String ^columnStr = Marshal::PtrToStringUni(  
                (IntPtr)dataColumn);  
  
        // Get all rows in the table.  
        array<DataRow ^> ^rows = table->Select();  
        int len = rows->Length;  
        len = (len > valuesLength) ? valuesLength : len;  
        for (int i = 0; i < len; i++)  
        {  
            // Marshal each column value from a managed string  
            // to a wchar_t *.  
            values[i] = (wchar_t *)Marshal::StringToHGlobalUni(  
                (String ^)rows[i][columnStr]).ToPointer();  
        }  
  
        return len;  
    }  
  
private:  
    // Using gcroot, you can use a managed type in  
    // a native class.  
    gcroot<DataTable ^> table;  
};  
  
#pragma unmanaged  
int main()  
{  
    // Create a table and add a few rows to it.  
    DatabaseClass *db = new DatabaseClass();  
    db->CreateAndPopulateTable();  
    db->AddRow(L"This is string 1.");  
    db->AddRow(L"This is string 2.");  
  
    // Now retrieve the rows and display their contents.  
    wchar_t *values[MAXCOLS];  
    int len = db->GetValuesForColumn(  
        L"StringCol", values, MAXCOLS);  
    for (int i = 0; i < len; i++)  
    {  
        wcout << "StringCol: " << values[i] << endl;  
  
        // Deallocate the memory allocated using  
        // Marshal::StringToHGlobalUni.  
        GlobalFree(values[i]);  
    }  
  
    delete db;  
  
    return 0;  
}  
```  
  
```Output  
StringCol: This is string 1.  
StringCol: This is string 2.  
```  
  
### <a name="compiling-the-code"></a>Compilazione del codice  
  
-   Per compilare il codice dalla riga di comando, salvare l'esempio di codice in un file denominato adonet_marshal_string_wide. cpp e immettere l'istruzione seguente:  
  
    ```  
    cl /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll adonet_marshal_string_wide.cpp  
    ```  

## <a name="marshal_variant"></a> Effettuare il marshalling di VARIANT per ADO.NET
Di seguito viene illustrato come aggiungere un nativo `VARIANT` a un database e come effettuare il marshalling di una <xref:System.Object?displayProperty=fullName> da un database a un native `VARIANT`.  
  
### <a name="example"></a>Esempio  
 In questo esempio, la classe DatabaseClass viene creata per interagire con ADO.NET <xref:System.Data.DataTable> oggetto. Si noti che questa classe è un codice C++ nativo `class` (rispetto a un `ref class` o `value class`). Ciò è necessario perché si desidera utilizzare questa classe dal codice nativo e non è possibile utilizzare i tipi gestiti nel codice nativo. Questa classe verrà compilata per il CLR, come indicato dal `#pragma managed` direttiva che precede la dichiarazione di classe. Per altre informazioni su questa direttiva, vedere [managed, unmanaged](../preprocessor/managed-unmanaged.md).  
  
 Si noti il membro privato della classe DatabaseClass: `gcroot<DataTable ^> table`. Poiché i tipi nativi non possono contenere tipi gestiti, il `gcroot` parola chiave è necessaria. Per ulteriori informazioni sul `gcroot`, vedere [procedura: dichiarare handle in tipi nativi](../dotnet/how-to-declare-handles-in-native-types.md).  
  
 Il resto del codice in questo esempio è codice C++ nativo, come indicato dal `#pragma unmanaged` precedente direttiva `main`. In questo esempio stiamo creando una nuova istanza della DatabaseClass e chiamarne i metodi per creare una tabella e inserire alcune righe nella tabella. Nativi `VARIANT` tipi vengono passati come valori per la colonna di database ObjectCol del database. All'interno di DatabaseClass, questi `VARIANT` vengono effettuato il marshalling di tipi per gli oggetti gestiti usando la funzionalità di marshalling trovata nel <xref:System.Runtime.InteropServices?displayProperty=fullName> dello spazio dei nomi. In particolare, il metodo <xref:System.Runtime.InteropServices.Marshal.GetObjectForNativeVariant%2A> viene usato per effettuare il marshalling una `VARIANT` a un <xref:System.Object>e il metodo <xref:System.Runtime.InteropServices.Marshal.GetNativeVariantForObject%2A> viene utilizzato per effettuare il marshalling un <xref:System.Object> a un `VARIANT`.  
  
```cpp  
// adonet_marshal_variant.cpp  
// compile with: /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll  
#include <comdef.h>  
#include <gcroot.h>  
#include <iostream>  
using namespace std;  
  
#using <System.Data.dll>  
using namespace System;  
using namespace System::Data;  
using namespace System::Runtime::InteropServices;  
  
#define MAXCOLS 100  
  
#pragma managed  
class DatabaseClass  
{  
public:  
    DatabaseClass() : table(nullptr) { }  
  
    void AddRow(VARIANT *objectColValue)  
    {  
        // Add a row to the table.  
        DataRow ^row = table->NewRow();  
        row["ObjectCol"] = Marshal::GetObjectForNativeVariant(  
            IntPtr(objectColValue));  
        table->Rows->Add(row);  
    }  
  
    void CreateAndPopulateTable()  
    {  
        // Create a simple DataTable.  
        table = gcnew DataTable("SampleTable");  
  
        // Add a column of type String to the table.  
        DataColumn ^column1 = gcnew DataColumn("ObjectCol",  
            Type::GetType("System.Object"));  
        table->Columns->Add(column1);  
    }  
  
    int GetValuesForColumn(wchar_t *dataColumn, VARIANT *values,  
        int valuesLength)  
    {  
        // Marshal the name of the column to a managed  
        // String.  
        String ^columnStr = Marshal::PtrToStringUni(  
                (IntPtr)dataColumn);  
  
        // Get all rows in the table.  
        array<DataRow ^> ^rows = table->Select();  
        int len = rows->Length;  
        len = (len > valuesLength) ? valuesLength : len;  
        for (int i = 0; i < len; i++)  
        {  
            // Marshal each column value from a managed object  
            // to a VARIANT.  
            Marshal::GetNativeVariantForObject(  
                rows[i][columnStr], IntPtr(&values[i]));  
        }  
  
        return len;  
    }  
  
private:  
    // Using gcroot, you can use a managed type in  
    // a native class.  
    gcroot<DataTable ^> table;  
};  
  
#pragma unmanaged  
int main()  
{  
    // Create a table and add a few rows to it.  
    DatabaseClass *db = new DatabaseClass();  
    db->CreateAndPopulateTable();  
  
    BSTR bstr1 = SysAllocString(L"This is a BSTR in a VARIANT.");  
    VARIANT v1;  
    v1.vt = VT_BSTR;  
    v1.bstrVal = bstr1;  
    db->AddRow(&v1);  
  
    int i = 42;  
    VARIANT v2;  
    v2.vt = VT_I4;  
    v2.lVal = i;  
    db->AddRow(&v2);  
  
    // Now retrieve the rows and display their contents.  
    VARIANT values[MAXCOLS];  
    int len = db->GetValuesForColumn(  
        L"ObjectCol", values, MAXCOLS);  
    for (int i = 0; i < len; i++)  
    {  
        switch (values[i].vt)  
        {  
            case VT_BSTR:  
                wcout << L"ObjectCol: " << values[i].bstrVal << endl;  
                break;  
            case VT_I4:  
                cout << "ObjectCol: " << values[i].lVal << endl;  
                break;  
            default:  
                break;  
        }  
  
    }  
  
    SysFreeString(bstr1);  
    delete db;  
  
    return 0;  
}  
```  
  
```Output  
ObjectCol: This is a BSTR in a VARIANT.  
ObjectCol: 42  
```  
  
### <a name="compiling-the-code"></a>Compilazione del codice  
  
-   Per compilare il codice dalla riga di comando, salvare l'esempio di codice in un file denominato adonet_marshal_variant. cpp e immettere l'istruzione seguente:  
  
    ```  
    cl /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll adonet_marshal_variant.cpp  
    ```  

## <a name="marshal_safearray"></a> Effettuare il marshalling di SAFEARRAY per ADO.NET
Di seguito viene illustrato come aggiungere un nativo `SAFEARRAY` a un database e come effettuare il marshalling di una matrice gestita da un database a una native `SAFEARRAY`.  
  
### <a name="example"></a>Esempio  
 In questo esempio, la classe DatabaseClass viene creata per interagire con ADO.NET <xref:System.Data.DataTable> oggetto. Si noti che questa classe è un codice C++ nativo `class` (rispetto a un `ref class` o `value class`). Ciò è necessario perché si desidera utilizzare questa classe dal codice nativo e non è possibile utilizzare i tipi gestiti nel codice nativo. Questa classe verrà compilata per il CLR, come indicato dal `#pragma managed` direttiva che precede la dichiarazione di classe. Per altre informazioni su questa direttiva, vedere [managed, unmanaged](../preprocessor/managed-unmanaged.md).  
  
 Si noti il membro privato della classe DatabaseClass: `gcroot<DataTable ^> table`. Poiché i tipi nativi non possono contenere tipi gestiti, il `gcroot` parola chiave è necessaria. Per ulteriori informazioni sul `gcroot`, vedere [procedura: dichiarare handle in tipi nativi](../dotnet/how-to-declare-handles-in-native-types.md).  
  
 Il resto del codice in questo esempio è codice C++ nativo, come indicato dal `#pragma unmanaged` precedente direttiva `main`. In questo esempio stiamo creando una nuova istanza della DatabaseClass e chiamarne i metodi per creare una tabella e inserire alcune righe nella tabella. Nativi `SAFEARRAY` tipi vengono passati come valori per la colonna di database ArrayIntsCol del database. All'interno di DatabaseClass, questi `SAFEARRAY` vengono effettuato il marshalling di tipi per gli oggetti gestiti usando la funzionalità di marshalling trovata nel <xref:System.Runtime.InteropServices?displayProperty=fullName> dello spazio dei nomi. In particolare, il metodo <xref:System.Runtime.InteropServices.Marshal.Copy%2A> viene usato per effettuare il marshalling una `SAFEARRAY` in una matrice di valori integer e il metodo gestita <xref:System.Runtime.InteropServices.Marshal.Copy%2A> viene usato per effettuare il marshalling di una matrice gestita di numeri interi da un `SAFEARRAY`.  
  
```cpp  
// adonet_marshal_safearray.cpp  
// compile with: /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll  
#include <comdef.h>  
#include <gcroot.h>  
#include <iostream>  
using namespace std;  
  
#using <System.Data.dll>  
using namespace System;  
using namespace System::Data;  
using namespace System::Runtime::InteropServices;  
  
#define MAXCOLS 100  
  
#pragma managed  
class DatabaseClass  
{  
public:  
    DatabaseClass() : table(nullptr) { }  
  
    void AddRow(SAFEARRAY *arrayIntsColValue)  
    {  
        // Add a row to the table.  
        DataRow ^row = table->NewRow();  
        int len = arrayIntsColValue->rgsabound[0].cElements;  
        array<int> ^arr = gcnew array<int>(len);  
  
        int *pData;  
        SafeArrayAccessData(arrayIntsColValue, (void **)&pData);  
        Marshal::Copy(IntPtr(pData), arr, 0, len);  
        SafeArrayUnaccessData(arrayIntsColValue);  
  
        row["ArrayIntsCol"] = arr;  
        table->Rows->Add(row);  
    }  
  
    void CreateAndPopulateTable()  
    {  
        // Create a simple DataTable.  
        table = gcnew DataTable("SampleTable");  
  
        // Add a column of type String to the table.  
        DataColumn ^column1 = gcnew DataColumn("ArrayIntsCol",  
            Type::GetType("System.Int32[]"));  
        table->Columns->Add(column1);  
    }  
  
    int GetValuesForColumn(wchar_t *dataColumn, SAFEARRAY **values,  
        int valuesLength)  
    {  
        // Marshal the name of the column to a managed  
        // String.  
        String ^columnStr = Marshal::PtrToStringUni(  
                (IntPtr)dataColumn);  
  
        // Get all rows in the table.  
        array<DataRow ^> ^rows = table->Select();  
        int len = rows->Length;  
        len = (len > valuesLength) ? valuesLength : len;  
        for (int i = 0; i < len; i++)  
        {  
            // Marshal each column value from a managed array  
            // of Int32s to a SAFEARRAY of type VT_I4.  
            values[i] = SafeArrayCreateVector(VT_I4, 0, 10);  
            int *pData;  
            SafeArrayAccessData(values[i], (void **)&pData);  
            Marshal::Copy((array<int> ^)rows[i][columnStr], 0,  
                IntPtr(pData), 10);  
            SafeArrayUnaccessData(values[i]);  
        }  
  
        return len;  
    }  
  
private:  
    // Using gcroot, you can use a managed type in  
    // a native class.  
    gcroot<DataTable ^> table;  
};  
  
#pragma unmanaged  
int main()  
{  
    // Create a table and add a few rows to it.  
    DatabaseClass *db = new DatabaseClass();  
    db->CreateAndPopulateTable();  
  
    // Create a standard array.  
    int originalArray[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };  
  
    // Create a SAFEARRAY.  
    SAFEARRAY *psa;  
    psa = SafeArrayCreateVector(VT_I4, 0, 10);  
  
    // Copy the data from the original array to the SAFEARRAY.  
    int *pData;  
    HRESULT hr = SafeArrayAccessData(psa, (void **)&pData);  
    memcpy(pData, &originalArray, 40);  
    SafeArrayUnaccessData(psa);  
    db->AddRow(psa);  
  
    // Now retrieve the rows and display their contents.  
    SAFEARRAY *values[MAXCOLS];  
    int len = db->GetValuesForColumn(  
        L"ArrayIntsCol", values, MAXCOLS);  
    for (int i = 0; i < len; i++)  
    {  
        int *pData;  
        SafeArrayAccessData(values[i], (void **)&pData);  
        for (int j = 0; j < 10; j++)  
        {  
            cout << pData[j] << " ";  
        }  
        cout << endl;  
        SafeArrayUnaccessData(values[i]);  
  
        // Deallocate the memory allocated using  
        // SafeArrayCreateVector.  
        SafeArrayDestroy(values[i]);  
    }  
  
    SafeArrayDestroy(psa);  
    delete db;  
  
    return 0;  
}  
```  
  
```Output  
0 1 2 3 4 5 6 7 8 9   
```  
  
### <a name="compiling-the-code"></a>Compilazione del codice  
  
-   Per compilare il codice dalla riga di comando, salvare l'esempio di codice in un file denominato adonet_marshal_safearray. cpp e immettere l'istruzione seguente:  
  
    ```  
    cl /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll adonet_marshal_safearray.cpp  
    ```  
  
## <a name="net-framework-security"></a>Sicurezza di .NET Framework  
 Per informazioni sui problemi di sicurezza ad ADO.NET, vedere [protezione di applicazioni ADO.NET](/dotnet/framework/data/adonet/securing-ado-net-applications).  

## <a name="related-sections"></a>Sezioni correlate  
  
|Sezione|Descrizione|  
|-------------|-----------------|  
|[ADO.NET](/dotnet/framework/data/adonet/index)|Viene fornita una panoramica di ADO.NET, un set di classi che espongono servizi di accesso ai dati al programmatore .NET.|  
  
## <a name="see-also"></a>Vedere anche  
 [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)
   
 [Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)

 <xref:System.Runtime.InteropServices>   

 [Interoperabilità](http://msdn.microsoft.com/afcc2e7d-3f32-48d2-8141-1c42acf29084)   
