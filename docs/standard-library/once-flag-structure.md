---
title: Struttura once_flag | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- mutex/std::once_flag
dev_langs:
- C++
ms.assetid: 71bfb88d-ca8c-4082-a6e1-ff52151e8629
caps.latest.revision: 13
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 249207d8723318c1a11760c512f3b88f13c97266
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="onceflag-structure"></a>Struttura once_flag

Rappresenta un oggetto `struct` usato con la funzione modello [call_once](../standard-library/mutex-functions.md#call_once) per garantire che il codice di inizializzazione venga chiamato una sola volta, anche in presenza di più thread di esecuzione.

## <a name="syntax"></a>Sintassi

struct once_flag { constexpr once_flag() noexcept; once_flag(const once_flag&); once_flag& operator=(const once_flag&); };

## <a name="remarks"></a>Note

Il `once_flag` `struct` ha solo un costruttore predefinito.

È possibile creare oggetti di tipo `once_flag`, ma non eseguirne la copia.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<mutex >

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[\<mutex>](../standard-library/mutex.md)<br/>
