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
ms.openlocfilehash: 110fe4abf7eb90b05e7feef563efa4882bed0fc6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81332008"
---
# <a name="marshal_context-class"></a>Classe marshal_context

Questa classe converte i dati tra ambienti nativi e gestiti.

## <a name="syntax"></a>Sintassi

```cpp
class marshal_context
```

## <a name="remarks"></a>Osservazioni

Utilizzare la classe `marshal_context` per le conversioni di dati che richiedono un contesto. Per ulteriori informazioni sulle conversioni che richiedono un contesto e sul file di marshalling che deve essere incluso, vedere [Panoramica del marshalling in C.](../dotnet/overview-of-marshaling-in-cpp.md) Il risultato del marshalling quando si utilizza un contesto è valido solo fino a quando l'oggetto `marshal_context` non viene eliminato in modo permanente. Per conservare il risultato, è necessario copiare i dati.

Lo `marshal_context` stesso può essere utilizzato per numerose conversioni di dati. Il riutilizzo del contesto in questo modo non influisce sui risultati delle chiamate di marshalling precedenti.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|---------|-----------|
|[marshal_context::marshal_context](#marshal-context)|Costruisce un `marshal_context` oggetto da utilizzare per la conversione dei dati tra tipi di dati gestiti e nativi.|
|[marshal_context:marshal_context:](#tilde-marshal-context)|Elimina un oggetto `marshal_context` .|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|---------|-----------|
|[marshal_context::marshal_as](#marshal-as)|Effettua il marshalling su un oggetto dati specifico per convertirlo tra un tipo di dati gestito e un tipo nativo.|

## <a name="requirements"></a>Requisiti

File di **intestazione:** \<msclr,marshal.h>, \<msclr,marshal_windows.h>, \< \<msclr marshal_cppstd.h> o msclr marshal_atl.h>

**Spazio dei nomi:** msclr::interop

## <a name="marshal_contextmarshal_context"></a><a name="marshal-context"></a>marshal_context::marshal_context

Costruisce un `marshal_context` oggetto da utilizzare per la conversione dei dati tra tipi di dati gestiti e nativi.

```cpp
marshal_context();
```

### <a name="remarks"></a>Osservazioni

Alcune conversioni di dati richiedono un contesto di marshalling. Per ulteriori informazioni sulle traduzioni che richiedono un contesto e sul file di marshalling da includere nell'applicazione, vedere [Panoramica del marshalling in C.](../dotnet/overview-of-marshaling-in-cpp.md)

### <a name="example"></a>Esempio

Vedere l'esempio per [marshal_context::marshal_as](../dotnet/marshal-context-marshal-as.md).

## <a name="marshal_contextmarshal_context"></a><a name="tilde-marshal-context"></a>marshal_context:marshal_context:

Elimina un oggetto `marshal_context` .

```cpp
~marshal_context();
```

### <a name="remarks"></a>Osservazioni

Alcune conversioni di dati richiedono un contesto di marshalling. Per ulteriori informazioni sulle traduzioni che richiedono un contesto e sul file di marshalling da includere nell'applicazione, vedere Cenni preliminari sul [marshalling in C.](../dotnet/overview-of-marshaling-in-cpp.md)

L'eliminazione di un oggetto `marshal_context` invaliderà i dati convertiti da quel contesto. Se si desidera mantenere i dati dopo l'eliminazione definitiva di un oggetto `marshal_context`, è necessario copiarli manualmente in una variabile che rimarrà valida.

## <a name="marshal_contextmarshal_as"></a><a name="marshal-as"></a>marshal_context::marshal_as

Effettua il marshalling su un oggetto dati specifico per convertirlo tra un tipo di dati gestito e un tipo nativo.

```cpp
To_Type marshal_as<To_Type>(
   From_Type input
);
```

### <a name="parameters"></a>Parametri

*Input*<br/>
[in] Valore di cui si desidera `To_Type` eseguire il marshalling in una variabile.

### <a name="return-value"></a>Valore restituito

Variabile di `To_Type` tipo che è il `input`valore convertito di .

### <a name="remarks"></a>Osservazioni

Questa funzione effettua il marshalling di un oggetto dati specifico. Utilizzare questa funzione solo con le conversioni indicate nella tabella in [Panoramica del marshalling in C.](../dotnet/overview-of-marshaling-in-cpp.md)

Se si tenta di eseguire il marshalling di `marshal_as` una coppia di tipi di dati non supportati, verrà generato un errore [C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md) in fase di compilazione. Leggere il messaggio fornito con questo errore per ulteriori informazioni. L'errore `C4996` può essere generato per più di una semplice funzione deprecata. Due condizioni che generano questo errore stanno tentando di effettuare il `marshal_as` marshalling di una coppia di tipi di dati che non sono supportati e tentano di utilizzare per una conversione che richiede un contesto.

La libreria del marshalling è costituita da diversi file di intestazione. Qualsiasi conversione richiede un solo file, ma puoi includere file aggiuntivi se necessario per altre conversioni. Nella tabella in `Marshaling Overview in C++` è indicato quale file di marshalling deve essere incluso per ogni conversione.

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
