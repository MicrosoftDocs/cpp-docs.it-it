---
description: 'Altre informazioni su: errore di compilazione progetto progetto PRJ0035'
title: Errore di compilazione progetto PRJ0035
ms.date: 08/27/2018
f1_keywords:
- PRJ0035
helpviewer_keywords:
- PRJ0035
ms.assetid: 0667116d-338c-40a4-972c-da875f778cb5
ms.openlocfilehash: 3099c27f9fb9337952676624f86dc0e53dfcca0d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97241053"
---
# <a name="project-build-error-prj0035"></a>Errore di compilazione progetto PRJ0035

> Il file XML '*file*' contiene contenuto Unicode che non è stato possibile convertire nella tabella codici ANSI dell'utente.
>
> *Contenuto UNICODE del file*

*file* è il file XML creato come riga di comando per lo strumento di distribuzione Web.

Il sistema del progetto ha trovato caratteri Unicode in alcune proprietà della pagina delle proprietà di distribuzione Web che non possono essere convertiti correttamente in ANSI.

La risoluzione di questo errore consiste nell'aggiornare il contenuto della proprietà in modo da usare ANSI o per installare la tabella codici nel computer e impostarla come impostazione predefinita del sistema.
