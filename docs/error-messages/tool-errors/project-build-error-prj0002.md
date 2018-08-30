---
title: Errore di compilazione PRJ0002 del progetto | Microsoft Docs
ms.custom: ''
ms.date: 08/27/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0002
dev_langs:
- C++
helpviewer_keywords:
- PRJ0002
ms.assetid: 1c820b1f-9a24-4681-80ed-4fcbfd7caa00
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bc0e48130c17e04c2671395161452c9e66000047
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43195715"
---
# <a name="project-build-error-prj0002"></a>Errore di compilazione progetto PRJ0002

> Errore restituito da '*riga di comando*'.

Il comando *riga di comando*, dall'input dell'utente in cui è stata formata la **pagine delle proprietà** verrà visualizzata la finestra di dialogo, ha restituito un codice di errore, ma nessuna informazione nel **Output** finestra .

La risoluzione di questo errore varia a seconda dello strumento ha generato l'errore. Per MIDL, si otterrà un'idea di cosa causa dell'errore se viene definito /o (reindirizzare l'Output).

Un file batch, ad esempio un passaggio di compilazione personalizzata o un evento di compilazione, che non fornisce informazioni sulle condizioni di errore potrebbe inoltre essere il motivo dell'errore.