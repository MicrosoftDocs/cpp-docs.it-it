---
title: Flag di controllo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- c.flags
dev_langs:
- C++
helpviewer_keywords:
- flags, control
- heap allocation, control flags
- debug heap, control flags
ms.assetid: 8dbd24a5-0633-42d1-9771-776db338465f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 716e597be5d337d11d58df944bbba468e496f078
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46078062"
---
# <a name="control-flags"></a>Flag di controllo

La versione di debug della libreria di runtime C Microsoft utilizza i seguenti flag per controllare l'allocazione dell'heap ed il processo di creazione rapporti. Per altre informazioni, vedere [Tecniche di debug CRT](/visualstudio/debugger/crt-debugging-techniques).

|Flag|Descrizione|
|----------|-----------------|
|[_CRTDBG_MAP_ALLOC](../c-runtime-library/crtdbg-map-alloc.md)|Esegue il mapping delle funzioni degli heap di base alle rispettive controparti di versione di debug|
|[_DEBUG](../c-runtime-library/debug.md)|Consente l'utilizzo delle versioni di debug delle funzioni di runtime|
|[_crtDbgFlag](../c-runtime-library/crtdbgflag.md)|Controlla come il gestore dell'heap di debug tiene traccia delle allocazioni|

Questi flag possono essere definiti con un'opzione della riga di comando /D o con una direttiva `#define`. Quando il flag è definito con `#define`, la direttiva deve essere visualizzata prima che il file di intestazione includa l'istruzione per le dichiarazioni di routine.

## <a name="see-also"></a>Vedere anche

[Variabili globali e tipi standard](../c-runtime-library/global-variables-and-standard-types.md)