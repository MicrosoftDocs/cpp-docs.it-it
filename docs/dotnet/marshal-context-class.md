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
ms.openlocfilehash: 25fc2be80ba0e5d8c7f76cee1f22eed4d1bb4fc7
ms.sourcegitcommit: 9813e146a4eb30929d8352872859e8fcb7ff6d2f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/23/2019
ms.locfileid: "54805981"
---
# <a name="marshalcontext-class"></a>Classe marshal_context

Questa classe converte i dati tra ambienti nativi e gestiti.

## <a name="syntax"></a>Sintassi

```cpp
class marshal_context
```

## <a name="remarks"></a>Note

Utilizzare la classe `marshal_context` per le conversioni di dati che richiedono un contesto. Per altre informazioni su quali conversioni richiedono un contesto e quali file di marshalling deve essere incluso, vedere [Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md). Il risultato del marshalling quando si utilizza un contesto è valido solo fino a quando l'oggetto `marshal_context` non viene eliminato in modo permanente. Per conservare il risultato, è necessario copiare i dati.

Lo stesso `marshal_context` può essere usato per le conversioni di dati diversi. Il riutilizzo del contesto in questo modo non influiscono sui risultati delle chiamate di marshalling precedenti.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|nome|Descrizione| 
|---------|-----------| 
|[marshal_context::marshal_context](#marshal-context)|Costruisce un `marshal_context` oggetto da utilizzare per la conversione dei dati tra i tipi di dati gestiti e nativi.| 
|[marshal_context::~marshal_context](#tilde-marshal-context)|Elimina un oggetto `marshal_context`.| 

### <a name="public-methods"></a>Metodi pubblici

|nome|Descrizione| 
|---------|-----------| 
|[marshal_context::marshal_as](#marshal-as)|Effettua il marshalling su un oggetto dati specifico per convertirlo tra un tipo di dati gestito e un tipo nativo.| 


## <a name="requirements"></a>Requisiti

**File di intestazione:** \<msclr\marshal.h >, \<msclr\marshal_windows.h >, \<msclr\marshal_cppstd.h >, o \<msclr\marshal_atl.h >

**Namespace:** msclr::interop

## <a name="marshal-context"></a>marshal_context::marshal_context

Costruisce un `marshal_context` oggetto da utilizzare per la conversione dei dati tra i tipi di dati gestiti e nativi.

```cpp
marshal_context();
```

### <a name="remarks"></a>Note

Alcune conversioni di dati richiedono un contesto di marshalling. Per altre informazioni su quali conversioni richiedono un contesto e quali il marshalling del file è necessario includere nell'applicazione, vedere [Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md).

### <a name="example"></a>Esempio

Vedere l'esempio relativo [marshal_context::marshal_as](../dotnet/marshal-context-marshal-as.md).


## <a name="tilde-marshal-context"></a>marshal_context::~marshal_context

Elimina un oggetto `marshal_context`.

```cpp
~marshal_context();
```

### <a name="remarks"></a>Note

Alcune conversioni di dati richiedono un contesto di marshalling. Visualizzare [Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md) per altre informazioni su quali conversioni richiedono un contesto e quali file di marshalling deve essere incluso nell'applicazione.

L'eliminazione di un oggetto `marshal_context` invaliderà i dati convertiti da quel contesto. Se si desidera mantenere i dati dopo l'eliminazione definitiva di un oggetto `marshal_context`, è necessario copiarli manualmente in una variabile che rimarrà valida.

## <a name="marshal-as"></a>marshal_context::marshal_as

Effettua il marshalling su un oggetto dati specifico per convertirlo tra un tipo di dati gestito e un tipo nativo.

```cpp
To_Type marshal_as<To_Type>(
   From_Type input
);
```

### <a name="parameters"></a>Parametri

*input*<br/>
[in] Il valore che si desidera effettuare il marshalling in un `To_Type` variabile.

### <a name="return-value"></a>Valore restituito

Una variabile di tipo `To_Type` che è il valore convertito di `input`.

### <a name="remarks"></a>Note

Questa funzione effettua il marshalling di un oggetto dati specifico. Usare questa funzione solo con le conversioni indicate dalla tabella [Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md).

Se si prova a effettuare il marshalling dei tipi di dati che non sono supportati, una coppia `marshal_as` genererà un errore [l'avviso C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md) in fase di compilazione. Legge il messaggio fornito con l'errore per ulteriori informazioni. Il `C4996` errore può essere generato per le funzioni più semplicemente deprecate. Due condizioni che generano questo errore sono il tentativo di effettuare il marshalling di una coppia di tipi di dati che non sono supportati e provando a usare `marshal_as` per una conversione che richiede un contesto.

La libreria del marshalling è costituito da diversi file di intestazione. Qualsiasi conversione richiede un solo file, ma è possibile includere file aggiuntivi se è necessario per le altre conversioni. Nella tabella in `Marshaling Overview in C++` è indicato quale file di marshalling deve essere incluso per ogni conversione.

### <a name="example"></a>Esempio

In questo esempio viene creato un contesto per effettuare il marshalling da un tipo di variabile `System::String` a un tipo di variabile `const char *`. I dati convertiti non sono validi dopo la riga che elimina il contesto.

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