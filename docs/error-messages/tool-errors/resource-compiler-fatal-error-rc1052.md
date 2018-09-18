---
title: Errore irreversibile del compilatore di risorse RC1052 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- RC1052
dev_langs:
- C++
helpviewer_keywords:
- RC1052
ms.assetid: 59803673-492b-44fa-80fa-df93b8aaf9fb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ef276bdecf675a178f43f22e3aef88f4ed1c73cd
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46071185"
---
# <a name="resource-compiler-fatal-error-rc1052"></a>Errore irreversibile del compilatore di risorse RC1052

limite del compilatore: blocchi #if o #ifdef eccessivamente annidati

Il programma ha superato il livello massimo di annidamento consentito per le direttive `#if` e `#ifdef`.

L'errore può essere causato da file di inclusione che usano tali direttive per il preprocessore.

Per risolvere il problema, ridurre il numero direttive `#if` e `#ifdef` annidate nel file di risorse. Se il problema è causato da file di intestazione inclusi nel file di risorse, ridurre il numero di direttive `#if` e `#ifdef` nei file di intestazione. Se ciò non è possibile, considerare la creazione e l'inclusione di un nuovo file di intestazione nel file di risorse, eseguendo il preprocessore nei file di intestazione inclusi esistenti. Per altre informazioni, vedere la [/P (pre-elabora in un File)](../../build/reference/p-preprocess-to-a-file.md) opzione del compilatore.