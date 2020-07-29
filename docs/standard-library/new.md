---
title: '&lt;Nuovo&gt;'
ms.date: 11/04/2016
f1_keywords:
- <new>
helpviewer_keywords:
- new header
ms.assetid: 218e2a15-34e8-4ef3-9122-1e90eccf8559
ms.openlocfilehash: 2a35a7b4d9581a11d889f3e66d0179c553c4fc25
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87212163"
---
# <a name="ltnewgt"></a>&lt;Nuovo&gt;

Definisce diversi tipi e funzioni che controllano l'allocazione e la liberazione di spazio di archiviazione nel controllo del programma. Definisce inoltre i componenti per la segnalazione degli errori di gestione della memoria.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<new>

**Spazio dei nomi:** std

## <a name="remarks"></a>Osservazioni

Alcune delle funzioni dichiarate in questa intestazione sono sostituibili.  L'implementazione fornisce una versione predefinita, il cui comportamento è illustrato in questo documento.  Un programma può, tuttavia, definire una funzione con la stessa firma per sostituire la versione predefinita in fase di collegamento. La versione di sostituzione deve soddisfare i requisiti descritti in questo documento.

## <a name="members"></a>Membri

### <a name="objects"></a>Oggetti

|||
|-|-|
|[nothrow](../standard-library/new-functions.md#nothrow)|Fornisce un oggetto da usare come argomento per le **`nothrow`** versioni di **`new`** e **`delete`** .|

### <a name="typedefs"></a>Typedef

|||
|-|-|
|[new_handler](../standard-library/new-typedefs.md#new_handler)|Tipo che punta a una funzione appropriata per l'uso come nuovo gestore.|
|[hardware_constructive_interference_size](../standard-library/new-typedefs.md#hardware_destructive_interference_size)||
|[hardware_destructive_interference_size](../standard-library/new-typedefs.md#hardware_destructive_interference_size)||

### <a name="functions"></a>Funzioni

|||
|-|-|
|[get_new_handler](../standard-library/new-functions.md#get_new_handler)||
|[riciclare](../standard-library/new-functions.md#launder)||
|[set_new_handler](../standard-library/new-functions.md#set_new_handler)|Installa una funzione utente che viene chiamata quando una nuova funzione non riesce nel tentativo di allocare memoria.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operatore delete](../standard-library/new-operators.md#op_delete)|Funzione chiamata da un'espressione delete per rendere nuovamente disponibile l'archiviazione di singoli oggetti.|
|[operator delete&#91;&#93;](../standard-library/new-operators.md#op_delete_arr)|Funzione chiamata da un'espressione delete per deallocare memoria per una matrice di oggetti.|
|[operatore New](../standard-library/new-operators.md#op_new)|La funzione chiamata da un'espressione new per allocare memoria per singoli oggetti.|
|[operator new&#91;&#93;](../standard-library/new-operators.md#op_new_arr)|La funzione chiamata da un'espressione new per allocare memoria per una matrice di oggetti.|

### <a name="enums"></a>Enumerazioni

|||
|-|-|
|[align_val_t](../standard-library/new-operators.md#op_align_val_t)||

### <a name="classes"></a>Classi

|||
|-|-|
|[Classe bad_alloc](../standard-library/bad-alloc-class.md)|La classe descrive un'eccezione generata per indicare che una richiesta di allocazione ha avuto esito negativo.|
|[Classe bad_array_new_length](../standard-library/bad-array-new-length.md)||
|[Classe nothrow_t](../standard-library/nothrow-t-structure.md)|La classe viene usata come parametro di funzione per l'operatore new per indicare che la funzione deve restituire un puntatore null per segnalare un errore di allocazione, invece di generare un'eccezione.|

## <a name="see-also"></a>Vedere anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
