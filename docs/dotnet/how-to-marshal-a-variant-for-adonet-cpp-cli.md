---
title: "Procedura: eseguire il marshalling di VARIANT per ADO.NET (C++/CLI) | Microsoft Docs"
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
  - "ADO.NET [C++], marshaling di VARIANT (tipi)"
  - "VARIANT"
  - "VARIANT, marshalling"
ms.assetid: 67a180a7-5691-48ab-8d85-7f75a68dde91
caps.latest.revision: 10
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: eseguire il marshalling di VARIANT per ADO.NET (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene illustrato come aggiungere un `VARIANT` nativo a un database e come eseguire il marshalling di <xref:System.Object?displayProperty=fullName> da un database a un `VARIANT` nativo.  
  
## Esempio  
 Nell'esempio viene creata la classe DatabaseClass per l'interazione con un oggetto <xref:System.Data.DataTable> ADO.NET.  Si noti che si tratta di una classe C\+\+ nativa `class`, anziché `ref class` o `value class`.  Ciò è necessario poiché si desidera utilizzare questa classe dal codice nativo, in cui non possono essere utilizzati tipi gestiti.  La classe verrà compilata per CLR, come indicato dalla direttiva `#pragma managed` che precede la dichiarazione di classe.  Per ulteriori informazioni su questa direttiva, vedere [managed, unmanaged](../preprocessor/managed-unmanaged.md).  
  
 Si noti il membro privato della classe DatabaseClass: `gcroot<DataTable ^> table`.  Poiché i tipi nativi non possono contenere tipi gestiti, è necessaria la parola chiave `gcroot`.  Per ulteriori informazioni su `gcroot`, vedere [Procedura: dichiarare handle in tipi nativi](../dotnet/how-to-declare-handles-in-native-types.md).  
  
 Il resto del codice nell'esempio è costituito da codice C\+\+ nativo, come indicato dalla direttiva `#pragma unmanaged` che precede `main`.  In questo esempio viene creata una nuova istanza di DatabaseClass e vengono chiamati i relativi metodi per creare una tabella e popolarne alcune righe.  Tipi `VARIANT` nativi vengono passati come valori per la colonna ObjectCol del database.  All'interno di DatabaseClass viene eseguito il marshalling di questi tipi `VARIANT` a oggetti gestiti tramite la funzionalità di marshalling disponibile nello spazio dei nomi <xref:System.Runtime.InteropServices?displayProperty=fullName>.  In particolare, il metodo <xref:System.Runtime.InteropServices.Marshal.GetObjectForNativeVariant%2A> viene utilizzato per il marshalling di `VARIANT` a <xref:System.Object> e il metodo <xref:System.Runtime.InteropServices.Marshal.GetNativeVariantForObject%2A> viene utilizzato per il marshalling di <xref:System.Object> a `VARIANT`.  
  
```  
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
  
  **ObjectCol: BSTR in un VARIANT.**  
**ObjectCol: 42**   
## Compilazione del codice  
  
-   Per compilare il codice dalla riga di comando, salvare l'esempio di codice in un file denominato adonet\_marshal\_variant.cpp e immettere la seguente istruzione:  
  
    ```  
    cl /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll adonet_marshal_variant.cpp  
    ```  
  
## Sicurezza di .NET Framework  
 Per informazioni sui problemi di sicurezza associati ad ADO.NET, vedere [Protezione di applicazioni ADO.NET](../Topic/Securing%20ADO.NET%20Applications.md).  
  
## Vedere anche  
 <xref:System.Runtime.InteropServices>   
 [Accesso ai dati](../dotnet/data-access-using-adonet-cpp-cli.md)   
 [ADO.NET](../Topic/ADO.NET.md)   
 [Interoperability](http://msdn.microsoft.com/it-it/afcc2e7d-3f32-48d2-8141-1c42acf29084)   
 [Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)