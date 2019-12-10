---
title: marshal_as
ms.date: 07/12/2019
ms.topic: reference
f1_keywords:
- marshal_as
- msclr.interop.marshal_as
- msclr::interop::marshal_as
helpviewer_keywords:
- marshal_as template [C++]
ms.assetid: 2ed717da-2b11-41e5-981d-47d251771989
ms.openlocfilehash: 2b2cacb0acf04aa40b3e299bffd7357e04916b16
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988135"
---
# <a name="marshal_as"></a>marshal_as

Questo metodo converte i dati tra ambienti nativi e gestiti.

## <a name="syntax"></a>Sintassi

```
To_Type marshal_as<To_Type>(
   From_Type input
);
```

#### <a name="parameters"></a>Parametri

*input*<br/>
in Valore di cui si desidera effettuare il marshalling in una variabile `To_Type`.

## <a name="return-value"></a>Valore restituito

Variabile di tipo `To_Type` che rappresenta il valore convertito di `input`.

## <a name="remarks"></a>Note

Questo metodo è un modo semplificato per convertire i dati tra tipi nativi e gestiti. Per determinare i tipi di dati supportati, vedere [Cenni preliminari sul marshalling in C++ ](../dotnet/overview-of-marshaling-in-cpp.md). Per alcune conversioni di dati è necessario un contesto. È possibile convertire questi tipi di dati usando la [classe marshal_context](../dotnet/marshal-context-class.md).

Se si tenta di effettuare il marshalling di una coppia di tipi di dati non supportati, `marshal_as` genererà un errore [C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md) in fase di compilazione. Per ulteriori informazioni, leggere il messaggio fornito con l'errore. È possibile generare l'errore di `C4996` per più di una semplice funzione deprecata. Un esempio è il tentativo di effettuare il marshalling di una coppia di tipi di dati che non sono supportati.

La libreria di marshalling è costituita da diversi file di intestazione. Qualsiasi conversione richiede un solo file, ma è possibile includere file aggiuntivi se necessario per altre conversioni. Per individuare le conversioni associate ai file, cercare nella tabella `Marshaling Overview`. Indipendentemente dalla conversione che si vuole eseguire, il requisito dello spazio dei nomi è sempre attivo.

Genera `System::ArgumentNullException(_EXCEPTION_NULLPTR)` se il parametro di input è null.

## <a name="example"></a>Esempio

Questo esempio esegue il marshalling da un `const char*` a un tipo di variabile `System::String`.

```cpp
// marshal_as_test.cpp
// compile with: /clr
#include <stdlib.h>
#include <string.h>
#include <msclr\marshal.h>

using namespace System;
using namespace msclr::interop;

int main() {
   const char* message = "Test String to Marshal";
   String^ result;
   result = marshal_as<String^>( message );
   return 0;
}
```

## <a name="requirements"></a>Requisiti di

**File di intestazione:** \<msclr\marshal.h >, \<msclr \ marshal_windows. h >, \<msclr \ marshal_cppstd. h > o \<msclr \ marshal_atl. h >

**Spazio dei nomi:** msclr:: Interop

## <a name="see-also"></a>Vedere anche

[Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md)<br/>
[Classe marshal_context](../dotnet/marshal-context-class.md)
