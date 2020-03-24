---
title: Avviso degli strumenti del linker LNK4086
ms.date: 11/04/2016
f1_keywords:
- LNK4086
helpviewer_keywords:
- LNK4086
ms.assetid: ea1eecbb-ba2c-41bb-9a4f-fa0808a4b92d
ms.openlocfilehash: 6e012ceb5e20855353c69bbcde85fb78afad2011
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80183423"
---
# <a name="linker-tools-warning-lnk4086"></a>Avviso degli strumenti del linker LNK4086

il punto di ingresso ' Function ' non è __stdcall con ' Number ' byte degli argomenti; l'immagine potrebbe non essere eseguita

Il punto di ingresso per una DLL deve essere `__stdcall`. Ricompilare la funzione con l'opzione [/GZ](../../build/reference/gd-gr-gv-gz-calling-convention.md) o specificare `__stdcall` o WINAPI quando si definisce la funzione.
