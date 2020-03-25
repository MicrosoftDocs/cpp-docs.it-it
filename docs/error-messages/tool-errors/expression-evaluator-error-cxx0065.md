---
title: Errore dell‘analizzatore di espressioni CXX0065
ms.date: 11/04/2016
f1_keywords:
- CXX0065
helpviewer_keywords:
- CAN0065
- CXX0065
ms.assetid: aac68f87-0b90-4c19-afa6-1c587625a5fd
ms.openlocfilehash: b4120deec3c8e7ce14e381f782904cf83a588e43
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80184424"
---
# <a name="expression-evaluator-error-cxx0065"></a>Errore dell‘analizzatore di espressioni CXX0065

variabile necessaria stack frame

Un'espressione contiene una variabile presente nell'ambito corrente ma non è ancora stata creata.

Questo errore può verificarsi quando è stato eseguito il prologo di una funzione, ma non è stata ancora configurata la stack frame per la funzione o se è stato eseguito il codice di uscita per la funzione.

Eseguire un'istruzione alla volta il codice di prologo fino a quando non viene configurata la stack frame prima di valutare l'espressione.

Questo errore è identico a CAN0065.
