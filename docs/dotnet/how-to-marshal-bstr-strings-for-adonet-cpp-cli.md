---
title: 'Procedura: effettuare il marshalling di stringhe BSTR per ADO.NET (C + + CLI) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: get-started-article
dev_langs: C++
helpviewer_keywords:
- BSTRs, strings
- ADO.NET [C++], marshaling BSTR strings
- strings [C++], marshaling BSTR strings
ms.assetid: 5daf4d9e-6ae8-4604-908f-855e37c8d636
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 9423dcc177db68319ea6d8e1771fe4b18a86c5c0
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="how-to-marshal-bstr-strings-for-adonet-ccli"></a>Procedura: Effettuare il marshalling di stringhe BSTR per ADO.NET (C++/CLI)
Di seguito viene illustrato come aggiungere una stringa COM (`BSTR`) a un database e come effettuare il marshalling un <xref:System.String?displayProperty=fullName> da un database a un `BSTR`.  
  
## <a name="example"></a>Esempio  
 In questo esempio, la classe DatabaseClass viene creata per interagire con ADO.NET <xref:System.Data.DataTable> oggetto. Si noti che questa classe è un codice C++ nativo `class` (rispetto a un `ref class` o `value class`). Ciò è necessario perché si desidera utilizzare questa classe dal codice nativo e non è possibile utilizzare i tipi gestiti in codice nativo. Questa classe verrà compilata per CLR, come indicato dal `#pragma managed` direttiva che precede la dichiarazione di classe. Per ulteriori informazioni su questa direttiva, vedere [managed, unmanaged](../preprocessor/managed-unmanaged.md).  
  
 Si noti il membro privato della classe DatabaseClass: `gcroot<DataTable ^> table`. Poiché i tipi nativi non possono contenere tipi gestiti, il `gcroot` è necessaria la parola chiave. Per ulteriori informazioni su `gcroot`, vedere [procedura: dichiarare handle in tipi nativi](../dotnet/how-to-declare-handles-in-native-types.md).  
  
 Il resto del codice in questo esempio è il codice C++ nativo, come indicato dal `#pragma unmanaged` precedente direttiva `main`. In questo esempio, stiamo creando una nuova istanza di DatabaseClass e chiamarne i metodi per creare una tabella e inserire alcune righe nella tabella. Si noti che le stringhe COM vengono passate come valori per la colonna StringCol del database. All'interno di DatabaseClass, queste stringhe vengono effettuato il marshalling di stringhe gestite tramite la funzionalità di marshalling, vedere il <xref:System.Runtime.InteropServices?displayProperty=fullName> dello spazio dei nomi. In particolare, il metodo <xref:System.Runtime.InteropServices.Marshal.PtrToStringBSTR%2A> viene utilizzato per effettuare il marshalling un `BSTR` per un <xref:System.String>e il metodo <xref:System.Runtime.InteropServices.Marshal.StringToBSTR%2A> viene utilizzato per effettuare il marshalling un <xref:System.String> per un `BSTR`.  
  
> [!NOTE]
>  La memoria allocata da <xref:System.Runtime.InteropServices.Marshal.StringToBSTR%2A> deve essere deallocata chiamando <xref:System.Runtime.InteropServices.Marshal.FreeBSTR%2A> o `SysFreeString`.  
  
```  
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
  
## <a name="compiling-the-code"></a>Compilazione del codice  
  
-   Per compilare il codice dalla riga di comando, salvare l'esempio di codice in un file denominato adonet_marshal_string_native. cpp e immettere l'istruzione seguente:  
  
    ```  
    cl /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll adonet_marshal_string_native.cpp  
    ```  
  
## <a name="net-framework-security"></a>Sicurezza di .NET Framework  
 Per informazioni sui problemi di sicurezza associati ad ADO.NET, vedere [protezione delle applicazioni ADO.NET](/dotnet/framework/data/adonet/securing-ado-net-applications).  
  
## <a name="see-also"></a>Vedere anche  
 <xref:System.Runtime.InteropServices>   
 [Accesso ai dati tramite ADO.NET (C + c++ /CLI)](../dotnet/data-access-using-adonet-cpp-cli.md)   
 [ADO.NET](/dotnet/framework/data/adonet/index)   
 [Interoperabilità](http://msdn.microsoft.com/en-us/afcc2e7d-3f32-48d2-8141-1c42acf29084)   
 [Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)