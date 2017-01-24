---
title: "Procedura: effettuare il marshalling di stringhe BSTR per ADO.NET (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ADO.NET [C++], marshalling di stringhe BSTR"
  - "BSTR, stringhe"
  - "stringhe [C++], marshalling di stringhe BSTR"
ms.assetid: 5daf4d9e-6ae8-4604-908f-855e37c8d636
caps.latest.revision: 11
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: effettuare il marshalling di stringhe BSTR per ADO.NET (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene illustrato come aggiungere una stringa COM \(`BSTR`\) a un database e come eseguire il marshalling di <xref:System.String?displayProperty=fullName> da un database a una stringa `BSTR`.  
  
## Esempio  
 Nell'esempio viene creata la classe DatabaseClass per l'interazione con un oggetto <xref:System.Data.DataTable> ADO.NET.  Si noti che si tratta di una classe C\+\+ nativa `class`, anziché `ref class` o `value class`.  Ciò è necessario poiché si desidera utilizzare questa classe dal codice nativo, in cui non possono essere utilizzati tipi gestiti.  La classe verrà compilata per CLR, come indicato dalla direttiva `#pragma managed` che precede la dichiarazione di classe.  Per ulteriori informazioni su questa direttiva, vedere [managed, unmanaged](../preprocessor/managed-unmanaged.md).  
  
 Si noti il membro privato della classe DatabaseClass: `gcroot<DataTable ^> table`.  Poiché i tipi nativi non possono contenere tipi gestiti, è necessaria la parola chiave `gcroot`.  Per ulteriori informazioni su `gcroot`, vedere [Procedura: dichiarare handle in tipi nativi](../dotnet/how-to-declare-handles-in-native-types.md).  
  
 Il resto del codice nell'esempio è costituito da codice C\+\+ nativo, come indicato dalla direttiva `#pragma unmanaged` che precede `main`.  In questo esempio viene creata una nuova istanza di DatabaseClass e vengono chiamati i relativi metodi per creare una tabella e popolarne alcune righe.  Stringhe COM vengono passate come valori per la colonna StringCol del database.  All'interno di DatabaseClass viene eseguito il marshalling di queste stringhe a stringhe gestite tramite la funzionalità di marshalling disponibile nello spazio dei nomi <xref:System.Runtime.InteropServices?displayProperty=fullName>.  In particolare, il metodo <xref:System.Runtime.InteropServices.Marshal.PtrToStringBSTR%2A> viene utilizzato per il marshalling di `BSTR` a <xref:System.String> e il metodo <xref:System.Runtime.InteropServices.Marshal.StringToBSTR%2A> viene utilizzato per il marshalling di <xref:System.String> a `BSTR`.  
  
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
  
  **StringCol: stringa 1.**  
**StringCol: stringa 2.**   
## Compilazione del codice  
  
-   Per compilare il codice dalla riga di comando, salvare l'esempio di codice in un file denominato adonet\_marshal\_string\_native.cpp e immettere la seguente istruzione:  
  
    ```  
    cl /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll adonet_marshal_string_native.cpp  
    ```  
  
## Sicurezza di .NET Framework  
 Per informazioni sui problemi di sicurezza associati ad ADO.NET, vedere [Protezione di applicazioni ADO.NET](../Topic/Securing%20ADO.NET%20Applications.md).  
  
## Vedere anche  
 <xref:System.Runtime.InteropServices>   
 [Accesso ai dati](../dotnet/data-access-using-adonet-cpp-cli.md)   
 [ADO.NET](../Topic/ADO.NET.md)   
 [Interoperability](http://msdn.microsoft.com/it-it/afcc2e7d-3f32-48d2-8141-1c42acf29084)   
 [Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)