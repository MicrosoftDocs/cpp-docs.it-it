---
description: 'Altre informazioni su: errore del compilatore C2129'
title: Errore del compilatore C2129
ms.date: 11/04/2016
f1_keywords:
- C2129
helpviewer_keywords:
- C2129
ms.assetid: 21a8223e-1d22-4baa-9ca1-922b7f751dd0
ms.openlocfilehash: 5efb19aa3f4edd14dd6cfab93c3880745b08e59d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97323155"
---
# <a name="compiler-error-c2129"></a>Errore del compilatore C2129

funzione statica ' Function ' dichiarata ma non definita

Viene eseguito un riferimento in diretta a una **`static`** funzione che non viene mai definita.

Una **`static`** funzione deve essere definita all'interno dell'ambito del file. Se la funzione è definita in un altro file, deve essere dichiarata **`extern`** .
