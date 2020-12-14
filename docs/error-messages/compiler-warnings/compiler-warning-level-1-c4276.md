---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4276'
title: Avviso del compilatore (livello 1) C4276
ms.date: 11/04/2016
f1_keywords:
- C4276
helpviewer_keywords:
- C4276
ms.assetid: 9d738c2d-29e5-408a-b9ff-be1a850b2238
ms.openlocfilehash: 14b13b2eb1e13d28f2b208e52ef71e1c729fe5e0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97311786"
---
# <a name="compiler-warning-level-1-c4276"></a>Avviso del compilatore (livello 1) C4276

' Function ': nessun prototipo fornito; non si presuppone alcun parametro

Quando si accetta l'indirizzo di una funzione con la convenzione di chiamata [__stdcall](../../cpp/stdcall.md) , è necessario assegnare un prototipo affinché il compilatore possa creare il nome decorato della funzione. Poiché la *funzione* non ha prototipi, il compilatore, durante la creazione del nome decorato, presuppone che la funzione non abbia parametri.
