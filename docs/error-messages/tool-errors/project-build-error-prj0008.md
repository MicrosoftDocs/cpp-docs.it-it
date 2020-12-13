---
description: 'Altre informazioni su: errore di compilazione progetto PRJ0008'
title: Errore di compilazione progetto PRJ0008
ms.date: 11/04/2016
f1_keywords:
- PRJ0008
helpviewer_keywords:
- PRJ0008
ms.assetid: 6bf7f17a-d2a8-4826-99c7-d600d846952f
ms.openlocfilehash: 2ae4952dfd3e5c5f53a3f549536598402ce1fd48
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97343912"
---
# <a name="project-build-error-prj0008"></a>Errore di compilazione progetto PRJ0008

Non è stato possibile eliminare il file ' file '.

**Verificare che il file non sia aperto da un altro processo e che non sia protetto da scrittura.**

Durante un'operazione di ricompilazione o pulizia, Visual C++ Elimina tutti i file intermedi e di output noti per la compilazione, nonché tutti i file che soddisfano le specifiche dei caratteri jolly della proprietà **estensioni da eliminare** in caso di pulizia nella [pagina delle proprietà impostazioni di configurazione generale](../../build/reference/general-property-page-project.md).

Questo errore viene visualizzato se Visual C++ non è in grado di eliminare un file. Per risolvere l'errore, rendere scrivibile il file e la relativa directory per l'utente che esegue la compilazione.
