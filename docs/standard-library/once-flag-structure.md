---
title: Struttura once_flag
ms.date: 09/17/2018
f1_keywords:
- mutex/std::once_flag
ms.assetid: 71bfb88d-ca8c-4082-a6e1-ff52151e8629
ms.openlocfilehash: 55c3f90f72857a4e4cd3f9075ce5bae10e14d218
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87202727"
---
# <a name="once_flag-structure"></a>Struttura once_flag

Rappresenta un oggetto **`struct`** utilizzato con la funzione modello [call_once](../standard-library/mutex-functions.md#call_once) per garantire che il codice di inizializzazione venga chiamato una sola volta, anche in presenza di più thread di esecuzione.

## <a name="syntax"></a>Sintassi

struct once_flag {constExpr once_flag () noexcept;};

## <a name="remarks"></a>Osservazioni

`once_flag` **`struct`** Dispone solo di un costruttore predefinito.

È possibile creare oggetti di tipo `once_flag`, ma non eseguirne la copia.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<mutex>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<mutex>](../standard-library/mutex.md)
