---
title: Chiamate di sistema | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- c.system
dev_langs:
- C++
helpviewer_keywords:
- Windows [C++], system calls
- system calls
ms.assetid: 0255f2ec-a5a0-487e-8b09-9dad001d81ed
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 87709026e9cc088b03f6e04dd30bd49d2cf3707b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32410331"
---
# <a name="system-calls"></a>Chiamate di sistema

Le funzioni seguenti sono chiamate di sistema di Windows.

## <a name="system-call-functions"></a>Funzioni chiamate di sistema

|Funzione|Usa|
|--------------|---------|
|[_findclose](../c-runtime-library/reference/findclose.md)|Rilascia risorse da operazioni di ricerca precedenti|
|[_findfirst, _findfirst32, _findfirst64, _findfirsti64, _findfirst32i64, _findfirst64i32, _wfindfirst, _wfindfirst32, _wfindfirst64, _wfindfirsti64, _wfindfirst32i64, _wfindfirst64i32](../c-runtime-library/reference/findfirst-functions.md)|Trova file con gli attributi specificati|
|[_findnext, _findnext32, _findnext64, _findnexti64, _findnext32i64, _findnext64i32, _wfindnext, _wfindnext32, _wfindnexti64, _wfindnext64, _wfindnexti64](../c-runtime-library/reference/findnext-functions.md)|Trova il successivo file con gli attributi specificati|

## <a name="see-also"></a>Vedere anche

[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
 [Gestione di file](../c-runtime-library/file-handling.md)<br/>
 [Controllo delle directory](../c-runtime-library/directory-control.md)<br/>
 [I/O a basso livello](../c-runtime-library/low-level-i-o.md)<br/>
