---
description: 'Altre informazioni su: struttura once_flag'
title: Struttura once_flag
ms.date: 09/17/2018
f1_keywords:
- mutex/std::once_flag
ms.assetid: 71bfb88d-ca8c-4082-a6e1-ff52151e8629
ms.openlocfilehash: 4419353e68da5929d8abed9b2c718438855057e0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338003"
---
# <a name="once_flag-structure"></a>Struttura once_flag

Rappresenta un oggetto **`struct`** utilizzato con la funzione modello [call_once](../standard-library/mutex-functions.md#call_once) per garantire che il codice di inizializzazione venga chiamato una sola volta, anche in presenza di più thread di esecuzione.

## <a name="syntax"></a>Sintassi

struct once_flag {constExpr once_flag () noexcept;};

## <a name="remarks"></a>Commenti

`once_flag` **`struct`** Dispone solo di un costruttore predefinito.

È possibile creare oggetti di tipo `once_flag`, ma non eseguirne la copia.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<mutex>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<mutex>](../standard-library/mutex.md)
