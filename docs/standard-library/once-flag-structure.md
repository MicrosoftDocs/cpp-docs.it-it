---
title: Struttura once_flag
ms.date: 09/17/2018
f1_keywords:
- mutex/std::once_flag
ms.assetid: 71bfb88d-ca8c-4082-a6e1-ff52151e8629
ms.openlocfilehash: 004a5545e2eccab83b0846e2ae30b88c8431c99d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50481971"
---
# <a name="onceflag-structure"></a>Struttura once_flag

Rappresenta un **struct** che viene usato con la funzione modello [call_once](../standard-library/mutex-functions.md#call_once) per assicurarsi che l'inizializzazione codice viene chiamato una sola volta, anche in presenza di più thread di esecuzione.

## <a name="syntax"></a>Sintassi

struttura once_flag {constexpr once_flag() noexcept;};

## <a name="remarks"></a>Note

Il `once_flag` **struct** ha solo un costruttore predefinito.

È possibile creare oggetti di tipo `once_flag`, ma non eseguirne la copia.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<mutex >

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[\<mutex>](../standard-library/mutex.md)<br/>
