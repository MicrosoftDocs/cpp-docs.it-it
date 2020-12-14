---
description: 'Altre informazioni su: errore di compilazione progetto progetto PRJ0031'
title: Errore di compilazione progetto PRJ0031
ms.date: 11/04/2016
f1_keywords:
- PRJ0031
helpviewer_keywords:
- PRJ0031
ms.assetid: b42435c6-e570-4f8e-9ad5-12a7ea69ccb2
ms.openlocfilehash: 9b7d9a030cd590a750a5ad2da0329a4bf48960a3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97241157"
---
# <a name="project-build-error-prj0031"></a>Errore di compilazione progetto PRJ0031

La proprietà "output" per l'istruzione di compilazione personalizzata per il file "file" contiene "macro" che restituisce "macro_expansion".

Un'istruzione di compilazione personalizzata in un file aveva un output non valido probabilmente a causa di un problema di valutazione macro. Questo errore può anche indicare che il formato del percorso non è corretto, che contiene caratteri o combinazioni di caratteri non validi in un percorso di file.

Per correggere l'errore, correggere la macro o correggere la specifica del percorso. Il percorso valutato è un percorso assoluto dalla directory del progetto.
