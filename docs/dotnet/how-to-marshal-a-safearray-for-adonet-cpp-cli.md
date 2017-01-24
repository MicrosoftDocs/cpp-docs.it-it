---
title: "Procedura: eseguire il marshalling di SAFEARRAY per ADO.NET (C++/CLI) | Microsoft Docs"
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
  - "ADO.NET [C++], marshaling di SAFEARRAY (tipi)"
  - "SAFEARRAY, marshalling"
ms.assetid: 1034b9d7-ecf1-40f7-a9ee-53180e87a58c
caps.latest.revision: 9
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: eseguire il marshalling di SAFEARRAY per ADO.NET (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene illustrato come aggiungere un `SAFEARRAY` nativo a un database e come eseguire il marshalling di una matrice gestita da un database a un `SAFEARRAY` nativo.  
  
## Esempio  
 Nell'esempio viene creata la classe DatabaseClass per l'interazione con un oggetto <xref:System.Data.DataTable> ADO.NET.  Si noti che si tratta di una classe C\+\+ nativa `class`, anziché `ref class` o `value class`.  Ciò è necessario poiché si desidera utilizzare questa classe dal codice nativo, in cui non possono essere utilizzati tipi gestiti.  La classe verrà compilata per CLR, come indicato dalla direttiva `#pragma managed` che precede la dichiarazione di classe.  Per ulteriori informazioni su questa direttiva, vedere [managed, unmanaged](../preprocessor/managed-unmanaged.md).  
  
 Si noti il membro privato della classe DatabaseClass: `gcroot<DataTable ^> table`.  Poiché i tipi nativi non possono contenere tipi gestiti, è necessaria la parola chiave `gcroot`.  Per ulteriori informazioni su `gcroot`, vedere [Procedura: dichiarare handle in tipi nativi](../dotnet/how-to-declare-handles-in-native-types.md).  
  
 Il resto del codice nell'esempio è costituito da codice C\+\+ nativo, come indicato dalla direttiva `#pragma unmanaged` che precede `main`.  In questo esempio viene creata una nuova istanza di DatabaseClass e vengono chiamati i relativi metodi per creare una tabella e popolarne alcune righe.  Tipi `SAFEARRAY` nativi vengono passati come valori per la colonna ArrayIntsCol del database.  All'interno di DatabaseClass viene eseguito il marshalling di questi tipi `SAFEARRAY` a oggetti gestiti tramite la funzionalità di marshalling disponibile nello spazio dei nomi <xref:System.Runtime.InteropServices?displayProperty=fullName>.  In particolare, il metodo <xref:System.Runtime.InteropServices.Marshal.Copy%2A> viene utilizzato per il marshalling di un `SAFEARRAY` a una matrice gestita di Integer e il metodo <xref:System.Runtime.InteropServices.Marshal.Copy%2A> viene utilizzato per il marshalling di una matrice gestita di Integer a un `SAFEARRAY`.  
  
```  
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
  
  **0 1 2 3 4 5 6 7 8 9**    
## Compilazione del codice  
  
-   Per compilare il codice dalla riga di comando, salvare l'esempio di codice in un file denominato adonet\_marshal\_safearray.cpp e immettere la seguente istruzione:  
  
    ```  
    cl /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll adonet_marshal_safearray.cpp  
    ```  
  
## Sicurezza di .NET Framework  
 Per informazioni sui problemi di sicurezza associati ad ADO.NET, vedere [Protezione di applicazioni ADO.NET](../Topic/Securing%20ADO.NET%20Applications.md).  
  
## Vedere anche  
 <xref:System.Runtime.InteropServices>   
 [Accesso ai dati](../dotnet/data-access-using-adonet-cpp-cli.md)   
 [ADO.NET](../Topic/ADO.NET.md)   
 [Interoperability](http://msdn.microsoft.com/it-it/afcc2e7d-3f32-48d2-8141-1c42acf29084)   
 [Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)