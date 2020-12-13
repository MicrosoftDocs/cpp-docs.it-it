---
description: 'Altre informazioni su: errore del compilatore C2856'
title: Errore del compilatore C2856
ms.date: 11/04/2016
f1_keywords:
- C2856
helpviewer_keywords:
- C2856
ms.assetid: fe616c51-124e-49e3-9dd8-883ec1660680
ms.openlocfilehash: 8594bc5902e13967084aa3695131d616a4cf04da
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337556"
---
# <a name="compiler-error-c2856"></a>Errore del compilatore C2856

\#pragma hdrstop non può trovarsi all'interno di un blocco #if

`hdrstop`Impossibile inserire il pragma all'interno del corpo di un blocco di compilazione condizionale.

Spostare l' `#pragma hdrstop` istruzione in un'area che non è contenuta in un `#if/#endif` blocco.
