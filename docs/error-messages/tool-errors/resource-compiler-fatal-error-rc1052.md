---
title: Errore irreversibile del compilatore di risorse RC1052
ms.date: 11/04/2016
f1_keywords:
- RC1052
helpviewer_keywords:
- RC1052
ms.assetid: 59803673-492b-44fa-80fa-df93b8aaf9fb
ms.openlocfilehash: ad0fe23b20870610c5979d6ad85fce55b4e506d3
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80182556"
---
# <a name="resource-compiler-fatal-error-rc1052"></a>Errore irreversibile del compilatore di risorse RC1052

limite del compilatore: blocchi #if o #ifdef eccessivamente annidati

Il programma ha superato il livello massimo di annidamento consentito per le direttive `#if` e `#ifdef`.

L'errore può essere causato da file di inclusione che usano tali direttive per il preprocessore.

Per risolvere il problema, ridurre il numero direttive `#if` e `#ifdef` annidate nel file di risorse. Se il problema è causato da file di intestazione inclusi nel file di risorse, ridurre il numero di direttive `#if` e `#ifdef` nei file di intestazione. Se ciò non è possibile, considerare la creazione e l'inclusione di un nuovo file di intestazione nel file di risorse, eseguendo il preprocessore nei file di intestazione inclusi esistenti. Per ulteriori informazioni, vedere l'opzione del compilatore [/p (pre-elabora in un file)](../../build/reference/p-preprocess-to-a-file.md) .
