---
description: 'Altre informazioni su: errore di compilazione progetto progetto PRJ0032'
title: Errore di compilazione progetto PRJ0032
ms.date: 11/04/2016
f1_keywords:
- PRJ0032
helpviewer_keywords:
- PRJ0032
ms.assetid: bc6acbea-4041-4237-8b5a-f0434705d89f
ms.openlocfilehash: 25c8f9480e63a8afee23c880912e17632111a4c2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97241144"
---
# <a name="project-build-error-prj0032"></a>Errore di compilazione progetto PRJ0032

La proprietà' output ' per l'istruzione di compilazione personalizzata a livello di progetto contiene ' macro ' che restituisce ' macro_expansion '.

Un'istruzione di compilazione personalizzata in un progetto presentava un output non valido probabilmente a causa di un problema di valutazione macro. Questo errore può anche indicare che il formato del percorso non è corretto, che contiene caratteri o combinazioni di caratteri non validi in un percorso di file.

Per correggere l'errore, correggere la macro o correggere la specifica del percorso. Il percorso valutato è un percorso assoluto dalla directory del progetto.
