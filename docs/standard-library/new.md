---
title: '&lt;new&gt;'
ms.date: 11/04/2016
f1_keywords:
- <new>
helpviewer_keywords:
- new header
ms.assetid: 218e2a15-34e8-4ef3-9122-1e90eccf8559
ms.openlocfilehash: 0259fd014133d48534f3183b1611219f369608f5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50623589"
---
# <a name="ltnewgt"></a>&lt;new&gt;

Definisce diversi tipi e funzioni che controllano l'allocazione e la liberazione di spazio di archiviazione nel controllo del programma. Definisce inoltre i componenti per la segnalazione degli errori di gestione della memoria.

## <a name="syntax"></a>Sintassi

```cpp
#include <new>

```

## <a name="remarks"></a>Note

Alcune delle funzioni dichiarate in questa intestazione sono sostituibili.  L'implementazione fornisce una versione predefinita, il cui comportamento è illustrato in questo documento.  Un programma può, tuttavia, definire una funzione con la stessa firma per sostituire la versione predefinita in fase di collegamento. La versione di sostituzione deve soddisfare i requisiti descritti in questo documento.

### <a name="objects"></a>Oggetti

|||
|-|-|
|[nothrow](../standard-library/new-functions.md#nothrow)|Fornisce un oggetto da utilizzare come argomento per il **nothrow** le versioni di **nuove** e **Elimina**.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[new_handler](../standard-library/new-typedefs.md#new_handler)|Tipo che punta a una funzione appropriata per l'uso come nuovo gestore.|

### <a name="functions"></a>Funzioni

|Funzione|Descrizione|
|-|-|
|[set_new_handler](../standard-library/new-functions.md#set_new_handler)|Installa una funzione utente che viene chiamata quando una nuova funzione non riesce nel tentativo di allocare memoria.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator delete](../standard-library/new-operators.md#op_delete)|Funzione chiamata da un'espressione delete per rendere nuovamente disponibile l'archiviazione di singoli oggetti.|
|[operator delete&#91;&#93;](../standard-library/new-operators.md#op_delete_arr)|Funzione chiamata da un'espressione delete per deallocare memoria per una matrice di oggetti.|
|[operator new](../standard-library/new-operators.md#op_new)|La funzione chiamata da un'espressione new per allocare memoria per singoli oggetti.|
|[operator new&#91;&#93;](../standard-library/new-operators.md#op_new_arr)|La funzione chiamata da un'espressione new per allocare memoria per una matrice di oggetti.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[Classe bad_alloc](../standard-library/bad-alloc-class.md)|La classe descrive un'eccezione generata per indicare che una richiesta di allocazione ha avuto esito negativo.|
|[Classe nothrow_t](../standard-library/nothrow-t-structure.md)|La classe viene usata come parametro di funzione per l'operatore new per indicare che la funzione deve restituire un puntatore null per segnalare un errore di allocazione, invece di generare un'eccezione.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
