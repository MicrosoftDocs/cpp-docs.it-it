---
description: 'Altre informazioni su: avviso del compilatore di risorse risorse RC4093'
title: Avviso del compilatore di risorse RC4093
ms.date: 11/04/2016
f1_keywords:
- RC4093
helpviewer_keywords:
- RC4093
ms.assetid: 3c61b4a4-b418-465b-a4fd-cb1ff0adb8dd
ms.openlocfilehash: 40f4777bb62fc2a5e434a4a365cdd027a04ffafd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97237088"
---
# <a name="resource-compiler-warning-rc4093"></a>Avviso del compilatore di risorse RC4093

nuova riga senza caratteri escape nella costante carattere nel codice inattivo

L'espressione costante di una `#if` `#elif` direttiva per il preprocessore,, **#ifdef** o **#ifndef** valutata su zero, rendendo il codice che segue inattivo. All'interno del codice inattivo, un carattere di nuova riga viene visualizzato all'interno di un set di virgolette singole o doppie.

Tutto il testo fino a quando le virgolette doppie successive erano considerate all'interno di una costante carattere.
