---
title: 'Procedura: estendere la libreria del marshalling'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- Marshaling Library, extending
ms.assetid: 4c4a56d7-1d44-4118-b85f-f9686515e6e9
ms.openlocfilehash: ab3b17638e07a54189803c83163db67c5ebf82a5
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988490"
---
# <a name="how-to-extend-the-marshaling-library"></a>Procedura: estendere la libreria del marshalling

In questo argomento viene illustrato come estendere la libreria di marshalling per fornire più conversioni tra tipi di dati. Gli utenti possono estendere la libreria di marshalling per qualsiasi conversione di dati non supportata attualmente dalla libreria.

È possibile estendere la libreria di marshalling in uno dei due modi seguenti: con o senza una [classe marshal_context](../dotnet/marshal-context-class.md). Esaminare la [Panoramica del marshalling nell' C++ ](../dotnet/overview-of-marshaling-in-cpp.md) argomento per determinare se una nuova conversione richiede un contesto.

In entrambi i casi, viene innanzitutto creato un file per le nuove conversioni di marshalling. Questa operazione viene eseguita per mantenere l'integrità dei file della libreria di marshalling standard. Se si desidera trasferire un progetto in un altro computer o in un altro programmatore, è necessario copiare il nuovo file di marshalling insieme al resto del progetto. In questo modo, all'utente che riceve il progetto verrà garantita la ricezione delle nuove conversioni e non sarà necessario modificare alcun file di libreria.

### <a name="to-extend-the-marshaling-library-with-a-conversion-that-does-not-require-a-context"></a>Per estendere la libreria di marshalling con una conversione che non richiede un contesto

1. Creare un file per archiviare le nuove funzioni di marshalling, ad esempio, Marshal. h.

1. Includere uno o più file di libreria di marshalling:

   - Marshal. h per i tipi di base.

   - marshal_windows. h per i tipi di dati di Windows.

   - marshal_cppstd. h per C++ i tipi di dati della libreria standard.

   - marshal_atl. h per i tipi di dati ATL.

1. Usare il codice alla fine di questi passaggi per scrivere la funzione di conversione. In questo codice, a è il tipo in cui eseguire la conversione, da è il tipo da cui eseguire la conversione e `from` è il parametro da convertire.

1. Sostituire il commento sulla logica di conversione con il codice per convertire il parametro `from` in un oggetto di tipo e restituire l'oggetto convertito.

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

### <a name="to-extend-the-marshaling-library-with-a-conversion-that-requires-a-context"></a>Per estendere la libreria di marshalling con una conversione che richiede un contesto

1. Creare un file per archiviare le nuove funzioni di marshalling, ad esempio, Marshal. h

1. Includere uno o più file di libreria di marshalling:

   - Marshal. h per i tipi di base.

   - marshal_windows. h per i tipi di dati di Windows.

   - marshal_cppstd. h per C++ i tipi di dati della libreria standard.

   - marshal_atl. h per i tipi di dati ATL.

1. Usare il codice alla fine di questi passaggi per scrivere la funzione di conversione. In questo codice, a è il tipo in cui eseguire la conversione, da è il tipo da cui eseguire la conversione `toObject` è un puntatore in cui archiviare il risultato e `fromObject` è il parametro da convertire.

1. Sostituire il commento sull'inizializzazione con il codice per inizializzare il `toPtr` sul valore vuoto appropriato. Se, ad esempio, si tratta di un puntatore, impostarlo su `NULL`.

1. Sostituire il commento sulla logica di conversione con il codice per convertire il parametro `from` in un oggetto *di tipo.* Questo oggetto convertito verrà archiviato in `toPtr`.

1. Sostituire il commento sull'impostazione `toObject` con il codice per impostare `toObject` all'oggetto convertito.

1. Sostituire il commento sulla pulizia delle risorse native con il codice per liberare la memoria allocata dal `toPtr`. Se `toPtr` memoria allocata tramite `new`, utilizzare `delete` per liberare la memoria.

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

Nell'esempio seguente viene estesa la libreria di marshalling con una conversione che non richiede un contesto. In questo esempio il codice converte le informazioni del dipendente da un tipo di dati nativo a un tipo di dati gestito.

```cpp
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

Nell'esempio precedente, la funzione `marshal_as` restituisce un handle per i dati convertiti. Questa operazione è stata eseguita in modo da impedire la creazione di una copia aggiuntiva dei dati. Alla restituzione diretta della variabile verrebbe associato un costo di prestazioni non necessario.

```Output
Managed name: Jeff Smith
Managed address: 123 Main Street
Managed zip code: 98111
```

## <a name="example"></a>Esempio

Nell'esempio seguente le informazioni sui dipendenti vengono convertite da un tipo di dati gestito a un tipo di dati nativo. Questa conversione richiede un contesto di marshalling.

```cpp
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
