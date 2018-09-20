---
title: 'Procedura: estendere la libreria del marshalling | Microsoft Docs'
ms.custom: get-started-article
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Marshaling Library, extending
ms.assetid: 4c4a56d7-1d44-4118-b85f-f9686515e6e9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: d4e50ca6fd99f373a65ba0592114cb7d9eedb242
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46384916"
---
# <a name="how-to-extend-the-marshaling-library"></a>Procedura: Estendere la libreria del marshalling

Questo argomento illustra come estendere la libreria del marshalling per fornire più conversioni tra tipi di dati. Gli utenti possono estendere la libreria del marshalling per qualsiasi conversione di dati non sono attualmente supportati dalla libreria.

È possibile estendere la libreria del marshalling in uno dei due modi: con o senza un [marshal_context Class](../dotnet/marshal-context-class.md). Rivedere le [Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md) argomento per determinare se una nuova conversione richiede un contesto.

In entrambi i casi, è prima necessario creare un file per le conversioni di marshalling di nuovo. A tale scopo per mantenere l'integrità dei file di libreria di marshalling standard. Se si desidera trasferire un progetto a un altro computer o a un altro programmatore, è necessario copiare il nuovo file di marshalling con il resto del progetto. In questo modo, l'utente che riceve il progetto sarà sempre le nuove conversioni e non sarà necessario modificare i file di libreria.

### <a name="to-extend-the-marshaling-library-with-a-conversion-that-does-not-require-a-context"></a>Per estendere la libreria del marshalling con una conversione che non richiedono un contesto

1. Creare un file per archiviare le nuove funzioni di marshalling, ad esempio, MyMarshal.

1. Includere uno o più dei file della libreria di marshalling:

   - Marshal. h per tipi di base.

   - marshal_windows. h per tipi di dati windows.

   - marshal_cppstd. h per i tipi di dati della libreria Standard C++.

   - marshal_atl. h per i tipi di dati ATL.

1. Usare il codice alla fine di questa procedura per scrivere la funzione di conversione. In questo codice, a è il tipo da convertire in, FROM è il tipo da convertire da, e `from` è il parametro da convertire.

1. Sostituire il commento sulla logica di conversione con il codice per convertire il `from` parametro in un oggetto dello a tipo e l'oggetto convertito restituito.

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

### <a name="to-extend-the-marshaling-library-with-a-conversion-that-requires-a-context"></a>Per estendere la libreria del marshalling con una conversione che richiede un contesto

1. Creare un file per archiviare le nuove funzioni di marshalling, ad esempio, MyMarshal

1. Includere uno o più dei file della libreria di marshalling:

   - Marshal. h per tipi di base.

   - marshal_windows. h per tipi di dati windows.

   - marshal_cppstd. h per i tipi di dati della libreria Standard C++.

   - marshal_atl. h per i tipi di dati ATL.

1. Usare il codice alla fine di questa procedura per scrivere la funzione di conversione. In questo codice, a è il tipo da convertire in, FROM è il tipo da convertire da `toObject` è un puntatore in cui archiviare il risultato e `fromObject` è il parametro da convertire.

1. Sostituire il commento sull'inizializzazione con il codice per inizializzare il `toPtr` sul valore vuoto appropriato. Ad esempio, se è un puntatore, impostarla su `NULL`.

1. Sostituire il commento sulla logica di conversione con il codice per convertire le `from` parametro in un oggetto dello *TO* tipo. Questo oggetto convertito verrà archiviato `toPtr`.

1. Sostituire il commento sull'impostazione `toObject` con il codice per impostare `toObject` all'oggetto convertito.

1. Sostituire il commento su come pulire le risorse native con il codice per liberare la memoria allocata da `toPtr`. Se `toPtr` memoria allocata tramite `new`, usare `delete` per liberare la memoria.

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

## <a name="example"></a>Esempio

L'esempio seguente estende la libreria del marshalling con una conversione che non richiedono un contesto. In questo esempio, il codice converte le informazioni sui dipendenti da un tipo di dati nativo a un tipo di dati gestiti.

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

Nell'esempio precedente, il `marshal_as` funzione restituisce un handle per i dati convertiti. Questa operazione è stata eseguita per impedire la creazione di una copia aggiuntiva dei dati. Restituendo direttamente la variabile potrebbe avere un impatto sulle prestazioni non necessari associato.

```Output
Managed name: Jeff Smith
Managed address: 123 Main Street
Managed zip code: 98111
```

## <a name="example"></a>Esempio

Nell'esempio seguente converte le informazioni sui dipendenti da un tipo di dati gestito a un tipo di dati nativi. Questa conversione richiede un contesto di marshalling.

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

```Output
Native name: Jeff Smith
Native address: 123 Main Street
Native zip code: 98111
```

## <a name="see-also"></a>Vedere anche

[Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md)