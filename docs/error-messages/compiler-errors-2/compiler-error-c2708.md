---
title: Errore del compilatore C2708
ms.date: 11/04/2016
f1_keywords:
- C2708
helpviewer_keywords:
- C2708
ms.assetid: d52d3088-1141-42f4-829c-74755a7fcc3a
ms.openlocfilehash: a128613cabb201142c29b833959924dbf8a6e0ba
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62160955"
---
# <a name="compiler-error-c2708"></a>Errore del compilatore C2708

'identifier': lunghezza in byte dei parametri effettivi differisce dalla precedente chiamata o di riferimento

Oggetto [stdcall](../../cpp/stdcall.md) funzione deve essere preceduta da un prototipo. In caso contrario, il compilatore interpreta la prima chiamata alla funzione come prototipo e questo errore si verifica quando il compilatore rileva una chiamata che non corrisponde.

Per risolvere questo errore, aggiungere un prototipo di funzione.