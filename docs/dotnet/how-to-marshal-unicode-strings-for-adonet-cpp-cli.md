---
title: 'Procedura: effettuare il marshalling di stringhe Unicode per ADO.NET (C + + CLI) | Documenti Microsoft'
ms.custom: get-started-article
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ADO.NET [C++], marshaling Unicode strings
- Unicode [C++], strings
- strings [C++], Unicode
ms.assetid: 1da090ff-6b53-40be-841f-dc79dfe8ba10
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 15cf9e9806c0820ea5a410a93419016c2f678c65
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="how-to-marshal-unicode-strings-for-adonet-ccli"></a>Procedura: Effettuare il marshalling di stringhe Unicode per ADO.NET (C++/CLI)
Viene illustrato come aggiungere una stringa Unicode nativa (`wchar_t *`) a un database e come effettuare il marshalling un <xref:System.String?displayProperty=fullName> da un database in una stringa Unicode nativa.  
  
## <a name="example"></a>Esempio  
 In questo esempio, la classe DatabaseClass viene creata per interagire con ADO.NET <xref:System.Data.DataTable> oggetto. Si noti che questa classe è un codice C++ nativo `class` (rispetto a un `ref class` o `value class`). Ciò è necessario perché si desidera utilizzare questa classe dal codice nativo e non è possibile utilizzare i tipi gestiti in codice nativo. Questa classe verrà compilata per CLR, come indicato dal `#pragma managed` direttiva che precede la dichiarazione di classe. Per ulteriori informazioni su questa direttiva, vedere [managed, unmanaged](../preprocessor/managed-unmanaged.md).  
  
 Si noti il membro privato della classe DatabaseClass: `gcroot<DataTable ^> table`. Poiché i tipi nativi non possono contenere tipi gestiti, il `gcroot` è necessaria la parola chiave. Per ulteriori informazioni su `gcroot`, vedere [procedura: dichiarare handle in tipi nativi](../dotnet/how-to-declare-handles-in-native-types.md).  
  
 Il resto del codice in questo esempio è il codice C++ nativo, come indicato dal `#pragma unmanaged` precedente direttiva `main`. In questo esempio, stiamo creando una nuova istanza di DatabaseClass e chiamarne i metodi per creare una tabella e inserire alcune righe nella tabella. Si noti che le stringhe Unicode C++ vengono passate come valori per la colonna StringCol del database. All'interno di DatabaseClass, queste stringhe vengono effettuato il marshalling di stringhe gestite tramite la funzionalità di marshalling, vedere il <xref:System.Runtime.InteropServices?displayProperty=fullName> dello spazio dei nomi. In particolare, il metodo <xref:System.Runtime.InteropServices.Marshal.PtrToStringUni%2A> viene utilizzato per effettuare il marshalling un `wchar_t *` per un <xref:System.String>e il metodo <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalUni%2A> viene utilizzato per effettuare il marshalling un <xref:System.String> per un `wchar_t *`.  
  
> [!NOTE]
>  La memoria allocata da <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalUni%2A> deve essere deallocata chiamando <xref:System.Runtime.InteropServices.Marshal.FreeHGlobal%2A> o `GlobalFree`.  
  
```  
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
  
## <a name="compiling-the-code"></a>Compilazione del codice  
  
-   Per compilare il codice dalla riga di comando, salvare l'esempio di codice in un file denominato adonet_marshal_string_wide. cpp e immettere l'istruzione seguente:  
  
    ```  
    cl /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll adonet_marshal_string_wide.cpp  
    ```  
  
## <a name="net-framework-security"></a>Sicurezza di .NET Framework  
 Per informazioni sui problemi di sicurezza associati ad ADO.NET, vedere [protezione delle applicazioni ADO.NET](/dotnet/framework/data/adonet/securing-ado-net-applications).  
  
## <a name="see-also"></a>Vedere anche  
 <xref:System.Runtime.InteropServices>   
 [Accesso ai dati tramite ADO.NET (C + c++ /CLI)](../dotnet/data-access-using-adonet-cpp-cli.md)   
 [ADO.NET](/dotnet/framework/data/adonet/index)   
 [Interoperabilità](http://msdn.microsoft.com/en-us/afcc2e7d-3f32-48d2-8141-1c42acf29084)   
 [Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)