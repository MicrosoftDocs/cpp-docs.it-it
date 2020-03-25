---
title: Classe marshal_context
ms.date: 01/16/2019
ms.topic: reference
f1_keywords:
- msclr::interop::marshal_context::marshal_context
- msclr::interop::marshal_context::marshal_as
helpviewer_keywords:
- msclr::marshal_context class [C++]
ms.assetid: 241b0cf6-4ca4-4812-aaee-d671c11dc034
ms.openlocfilehash: 146a0f7a7cc1402f7c28e6bf09fead1914c7c6be
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80208523"
---
# <a name="marshal_context-class"></a>Classe marshal_context

Questa classe converte i dati tra ambienti nativi e gestiti.

## <a name="syntax"></a>Sintassi

```cpp
class marshal_context
```

## <a name="remarks"></a>Osservazioni

Utilizzare la classe `marshal_context` per le conversioni di dati che richiedono un contesto. Per ulteriori informazioni sulle conversioni che richiedono un contesto e il file di marshalling da includere, vedere [Cenni preliminari sul marshalling in C++ ](../dotnet/overview-of-marshaling-in-cpp.md). Il risultato del marshalling quando si utilizza un contesto è valido solo fino a quando l'oggetto `marshal_context` non viene eliminato in modo permanente. Per conservare il risultato, è necessario copiare i dati.

È possibile utilizzare lo stesso `marshal_context` per numerose conversioni di dati. Il riutilizzo del contesto in questo modo non influirà sui risultati delle chiamate di marshalling precedenti.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|---------|-----------|
|[marshal_context::marshal_context](#marshal-context)|Costruisce un `marshal_context` oggetto da utilizzare per la conversione dei dati tra tipi di dati gestiti e nativi.|
|[marshal_context::~marshal_context](#tilde-marshal-context)|Elimina un oggetto `marshal_context`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|---------|-----------|
|[marshal_context::marshal_as](#marshal-as)|Effettua il marshalling su un oggetto dati specifico per convertirlo tra un tipo di dati gestito e un tipo nativo.|

## <a name="requirements"></a>Requisiti

**File di intestazione:** \<msclr\marshal.h >, \<msclr \ marshal_windows. h >, \<msclr \ marshal_cppstd. h > o \<msclr \ marshal_atl. h >

**Spazio dei nomi:** msclr:: Interop

## <a name="marshal_contextmarshal_context"></a><a name="marshal-context"></a>marshal_context:: marshal_context

Costruisce un `marshal_context` oggetto da utilizzare per la conversione dei dati tra tipi di dati gestiti e nativi.

```cpp
marshal_context();
```

### <a name="remarks"></a>Osservazioni

Alcune conversioni di dati richiedono un contesto di marshalling. Per ulteriori informazioni sulle traduzioni che richiedono un contesto e sul file di marshalling da includere nell'applicazione, vedere [Cenni preliminari sul marshalling C++in ](../dotnet/overview-of-marshaling-in-cpp.md).

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [marshal_context:: marshal_as](../dotnet/marshal-context-marshal-as.md).

## <a name="marshal_contextmarshal_context"></a><a name="tilde-marshal-context"></a>marshal_context:: ~ marshal_context

Elimina un oggetto `marshal_context`.

```cpp
~marshal_context();
```

### <a name="remarks"></a>Osservazioni

Alcune conversioni di dati richiedono un contesto di marshalling. Per ulteriori informazioni sulle traduzioni che richiedono un contesto e il file di marshalling da includere nell'applicazione, vedere [Cenni preliminari sul C++ marshalling in](../dotnet/overview-of-marshaling-in-cpp.md) .

L'eliminazione di un oggetto `marshal_context` invaliderà i dati convertiti da quel contesto. Se si desidera mantenere i dati dopo l'eliminazione definitiva di un oggetto `marshal_context`, è necessario copiarli manualmente in una variabile che rimarrà valida.

## <a name="marshal_contextmarshal_as"></a><a name="marshal-as"></a>marshal_context:: marshal_as

Effettua il marshalling su un oggetto dati specifico per convertirlo tra un tipo di dati gestito e un tipo nativo.

```cpp
To_Type marshal_as<To_Type>(
   From_Type input
);
```

### <a name="parameters"></a>Parametri

*input*<br/>
in Valore di cui si desidera effettuare il marshalling in una variabile `To_Type`.

### <a name="return-value"></a>Valore restituito

Variabile di tipo `To_Type` il valore convertito di `input`.

### <a name="remarks"></a>Osservazioni

Questa funzione effettua il marshalling di un oggetto dati specifico. Utilizzare questa funzione solo con le conversioni indicate dalla tabella in [Cenni preliminari sul marshalling in C++ ](../dotnet/overview-of-marshaling-in-cpp.md).

Se si tenta di effettuare il marshalling di una coppia di tipi di dati non supportati, `marshal_as` genererà un errore [C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md) in fase di compilazione. Per ulteriori informazioni, leggere il messaggio fornito con l'errore. È possibile generare l'errore di `C4996` per più di una semplice funzione deprecata. Due condizioni che generano questo errore stanno tentando di effettuare il marshalling di una coppia di tipi di dati che non sono supportati e tentano di usare `marshal_as` per una conversione che richiede un contesto.

La libreria di marshalling è costituita da diversi file di intestazione. Qualsiasi conversione richiede un solo file, ma è possibile includere file aggiuntivi se necessario per altre conversioni. Nella tabella in `Marshaling Overview in C++` è indicato quale file di marshalling deve essere incluso per ogni conversione.

### <a name="example"></a>Esempio

In questo esempio viene creato un contesto per il marshalling da un tipo di variabile `System::String` a un tipo di variabile `const char *`. I dati convertiti non saranno validi dopo la riga che elimina il contesto.

```cpp
// marshal_context_test.cpp
// compile with: /clr
#include <stdlib.h>
#include <string.h>
#include <msclr\marshal.h>

using namespace System;
using namespace msclr::interop;

int main() {
   marshal_context^ context = gcnew marshal_context();
   String^ message = gcnew String("Test String to Marshal");
   const char* result;
   result = context->marshal_as<const char*>( message );
   delete context;
   return 0;
}
```
