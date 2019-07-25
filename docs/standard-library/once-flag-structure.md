---
title: Struttura once_flag
ms.date: 09/17/2018
f1_keywords:
- mutex/std::once_flag
ms.assetid: 71bfb88d-ca8c-4082-a6e1-ff52151e8629
ms.openlocfilehash: fb85bd48f9b1ac10ec2fefbc6738aae777f67bcf
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68455200"
---
# <a name="onceflag-structure"></a>Struttura once_flag

Rappresenta uno **struct** utilizzato con la funzione di modello [call_once](../standard-library/mutex-functions.md#call_once) per garantire che il codice di inizializzazione venga chiamato una sola volta, anche in presenza di più thread di esecuzione.

## <a name="syntax"></a>Sintassi

struct once_flag {constExpr once_flag () noexcept;};

## <a name="remarks"></a>Note

Lo `once_flag` **struct** dispone solo di un costruttore predefinito.

È possibile creare oggetti di tipo `once_flag`, ma non eseguirne la copia.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<> mutex

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<mutex>](../standard-library/mutex.md)
