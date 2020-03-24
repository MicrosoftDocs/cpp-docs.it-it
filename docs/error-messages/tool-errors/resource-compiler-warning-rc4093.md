---
title: Avviso del compilatore di risorse RC4093
ms.date: 11/04/2016
f1_keywords:
- RC4093
helpviewer_keywords:
- RC4093
ms.assetid: 3c61b4a4-b418-465b-a4fd-cb1ff0adb8dd
ms.openlocfilehash: 29d24f1e380f5c531e170e5dc23cf5c77eefb874
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80182292"
---
# <a name="resource-compiler-warning-rc4093"></a>Avviso del compilatore di risorse RC4093

nuova riga senza caratteri escape nella costante carattere nel codice inattivo

L'espressione costante di una direttiva per il preprocessore `#if`, `#elif`, **#ifdef**o **#ifndef** ha restituito zero, rendendo il codice che segue inattivo. All'interno del codice inattivo, un carattere di nuova riga viene visualizzato all'interno di un set di virgolette singole o doppie.

Tutto il testo fino a quando le virgolette doppie successive erano considerate all'interno di una costante carattere.
