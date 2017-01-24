---
title: "Procedura: estendere la libreria del marshalling | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "libreria del marshalling, estensione"
ms.assetid: 4c4a56d7-1d44-4118-b85f-f9686515e6e9
caps.latest.revision: 27
caps.handback.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: estendere la libreria del marshalling
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato come estendere la libreria del marshalling per fornire più conversioni tra tipi di dati.  Gli utenti possono estendere la libreria del marshalling per qualsiasi conversione di dati attualmente non supportata dalla libreria.  
  
 L'estensione della libreria del marshalling può essere eseguita in due modi: con o senza una [Classe marshal\_context](../dotnet/marshal-context-class.md).  Rivedere l'argomento [Panoramica del marshaling in C\+\+](../dotnet/overview-of-marshaling-in-cpp.md) per determinare se una nuova conversione richiede un contesto.  
  
 In entrambi casi, innanzitutto viene creato un file per le nuove conversioni di marshalling .  Questa operazione preserva l'integrità dei file della libreria del marshalling standard.  Se si desidera trasferire un progetto in un altro computer o a un altro programmatore, è necessario copiare il nuovo file di marshalling con il resto del progetto.  In questo modo, il destinatario riceverà sicuramente le nuove conversioni e non dovrà modificare i file di libreria.  
  
### Per estendere la libreria del marshalling con una conversione che non richiede un contesto  
  
1.  Creare un file per archiviare le nuove funzioni di marshalling, ad esempio MyMarshal.h.  
  
2.  Includere uno o più dei file della libreria del marshalling:  
  
    -   marshal.h per i tipi di base.  
  
    -   marshal\_windows.h per i tipi di dati Windows.  
  
    -   marshal\_cppstd.h per i tipi di dati STL.  
  
    -   marshal\_atl.h per i tipi di dati ATL.  
  
3.  Utilizzare il codice alla fine di queste operazioni per scrivere la funzione di conversione.  In questo codice, TO è il tipo in cui convertire, FROM è il tipo da cui far partire la conversione e `from` è il parametro da convertire.  
  
4.  Sostituire il commento sulla logica di conversione con il codice per convertire il parametro `from` in un oggetto di tipo TO e restituire l'oggetto convertito.  
  
```  
namespace msclr {  
   namespace interop {  
      template<>  
      inline TO marshal_as<TO, FROM> (const FROM& from) {  
         // Insert conversion logic here, and return a TO parameter.  
      }  
   }  
}  
```  
  
### Per estendere la libreria del marshalling con una conversione che richiede un contesto  
  
1.  Creare un file per archiviare le nuove funzioni di marshalling, ad esempio MyMarshal.h  
  
2.  Includere uno o più dei file della libreria del marshalling:  
  
    -   marshal.h per i tipi di base.  
  
    -   marshal\_windows.h per i tipi di dati Windows.  
  
    -   marshal\_cppstd.h per i tipi di dati STL.  
  
    -   marshal\_atl.h per i tipi di dati ATL.  
  
3.  Utilizzare il codice alla fine di queste operazioni per scrivere la funzione di conversione.  In questo codice, TO è il tipo in cui convertire, FROM è il tipo da cui far partire la conversione, `toObject` è un puntatore in cui archiviare il risultato e `fromObject` è il parametro da convertire.  
  
4.  Sostituire il commento sull'inizializzazione con codice per inizializzare il parametro `toPtr` sul valore vuoto appropriato.  Se ad esempio si tratta di un puntatore, impostarlo su `NULL`.  
  
5.  Sostituire il commento sulla logica di conversione con il codice per convertire il parametro di `from` in un oggetto del tipo di *TO*.  L'oggetto convertito verrà archiviato in `toPtr`.  
  
6.  Sostituire il commento sull'impostazione di `toObject` con il codice per impostare `toObject` sull'oggetto convertito.  
  
7.  Sostituire il commento sulla pulizia delle risorse native contenenti codice per liberare eventuale memoria allocata da `toPtr`.  Se `toPtr` ha allocato memoria mediante `new`, utilizzare `delete` per liberare memoria.  
  
```  
namespace msclr {  
   namespace interop {  
      template<>  
      ref class context_node<TO, FROM> : public context_node_base  
      {  
      private:  
         TO toPtr;  
      public:  
         context_node(TO& toObject, FROM fromObject)  
         {  
            // (Step 4) Initialize toPtr to the appropriate empty value.  
            // (Step 5) Insert conversion logic here.  
            // (Step 6) Set toObject to the converted parameter.  
         }  
         ~context_node()  
         {  
            this->!context_node();  
         }  
      protected:  
         !context_node()  
         {  
            // (Step 7) Clean up native resources.  
         }  
      };  
   }  
}   
```  
  
## Esempio  
 Nell'esempio riportato di seguito la libreria del marshalling viene estesa con una conversione che non richiede un contesto.  In questo esempio, il codice converte le informazioni sul personale da un tipo di dati nativo a un tipo di dati gestito.  
  
```  
// MyMarshalNoContext.cpp  
// compile with: /clr  
#include <msclr/marshal.h>  
  
value struct ManagedEmp {  
   System::String^ name;  
   System::String^ address;  
   int zipCode;  
};  
  
struct NativeEmp {  
   char* name;  
   char* address;  
   int zipCode;  
};  
  
namespace msclr {  
   namespace interop {  
      template<>  
      inline ManagedEmp^ marshal_as<ManagedEmp^, NativeEmp> (const NativeEmp& from) {  
         ManagedEmp^ toValue = gcnew ManagedEmp;  
         toValue->name = marshal_as<System::String^>(from.name);  
         toValue->address = marshal_as<System::String^>(from.address);  
         toValue->zipCode = from.zipCode;  
         return toValue;  
      }  
   }  
}  
  
using namespace System;  
using namespace msclr::interop;  
  
int main() {   
   NativeEmp employee;  
  
   employee.name = "Jeff Smith";  
   employee.address = "123 Main Street";  
   employee.zipCode = 98111;  
  
   ManagedEmp^ result = marshal_as<ManagedEmp^>(employee);  
  
   Console::WriteLine("Managed name: {0}", result->name);  
   Console::WriteLine("Managed address: {0}", result->address);  
   Console::WriteLine("Managed zip code: {0}", result->zipCode);  
  
   return 0;  
}  
```  
  
 Nell'esempio precedente, la funzione `marshal_as` restituisce un handle ai dati convertiti.  L'obiettivo è di impedire la creazione di una copia aggiuntiva dei dati.  La restituzione diretta della variabile comporterebbe un costo associato superfluo in termini di prestazioni.  
  
  **Nome gestito: Jeff Smith**  
**Indirizzo gestito: 123 Main Street**  
**Codice postale gestito: 98111**   
## Esempio  
 Nell'esempio riportato di seguito, il codice converte le informazioni sul personale da un tipo di dati gestito a un tipo di dati nativo.  Questa conversione richiede un contesto di marshalling.  
  
```  
// MyMarshalContext.cpp  
// compile with: /clr  
#include <stdlib.h>  
#include <string.h>  
#include <msclr/marshal.h>  
  
value struct ManagedEmp {  
   System::String^ name;  
   System::String^ address;  
   int zipCode;  
};  
  
struct NativeEmp {  
   const char* name;  
   const char* address;  
   int zipCode;  
};  
  
namespace msclr {  
   namespace interop {  
      template<>  
      ref class context_node<NativeEmp*, ManagedEmp^> : public context_node_base  
      {  
      private:  
         NativeEmp* toPtr;  
         marshal_context context;  
      public:  
         context_node(NativeEmp*& toObject, ManagedEmp^ fromObject)  
         {  
            // Conversion logic starts here  
            toPtr = NULL;  
  
            const char* nativeName;  
            const char* nativeAddress;  
  
            // Convert the name from String^ to const char*.  
            System::String^ tempValue = fromObject->name;  
            nativeName = context.marshal_as<const char*>(tempValue);  
  
            // Convert the address from String^ to const char*.  
            tempValue = fromObject->address;  
            nativeAddress = context.marshal_as<const char*>(tempValue);  
  
            toPtr = new NativeEmp();  
            toPtr->name = nativeName;  
            toPtr->address = nativeAddress;  
            toPtr->zipCode = fromObject->zipCode;  
  
            toObject = toPtr;  
         }  
         ~context_node()  
         {  
            this->!context_node();  
         }  
      protected:  
         !context_node()  
         {  
            // When the context is deleted, it will free the memory  
            // allocated for toPtr->name and toPtr->address, so toPtr  
            // is the only memory that needs to be freed.  
            if (toPtr != NULL) {  
               delete toPtr;  
               toPtr = NULL;  
            }  
         }  
      };  
   }  
}   
  
using namespace System;  
using namespace msclr::interop;  
  
int main() {  
   ManagedEmp^ employee = gcnew ManagedEmp();  
  
   employee->name = gcnew String("Jeff Smith");  
   employee->address = gcnew String("123 Main Street");  
   employee->zipCode = 98111;  
  
   marshal_context context;  
   NativeEmp* result = context.marshal_as<NativeEmp*>(employee);  
  
   if (result != NULL) {  
      printf_s("Native name: %s\nNative address: %s\nNative zip code: %d\n",  
         result->name, result->address, result->zipCode);  
   }  
  
   return 0;  
}  
```  
  
  **Nome nativo: Jeff Smith**  
**Indirizzo nativo: 123 Main Street**  
**Codice postale nativo: 98111**   
## Vedere anche  
 [Panoramica del marshaling in C\+\+](../dotnet/overview-of-marshaling-in-cpp.md)