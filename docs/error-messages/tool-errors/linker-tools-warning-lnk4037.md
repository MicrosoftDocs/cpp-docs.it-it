---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4037'
title: Avviso degli strumenti del linker LNK4037
ms.date: 10/04/2017
f1_keywords:
- LNK4037
helpviewer_keywords:
- LNK4037
ms.assetid: 9ba02fd3-b04f-4679-bab9-26fa82cf09bb
ms.openlocfilehash: 78fd5ed9f8e2f82221b64053607846f1b8abc00a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331954"
---
# <a name="linker-tools-warning-lnk4037"></a>Avviso degli strumenti del linker LNK4037

>'*Symbol*' non esiste; ignorato

Non è stato possibile ordinare il *simbolo* del nome decorato utilizzando l'opzione [/Order](../../build/reference/order-put-functions-in-order.md) perché non è stato trovato nel programma. Controllare la specifica del *simbolo* nel file di risposta dell'ordine. Per ulteriori informazioni, vedere l'opzione del linker [/Order (Put Functions in order)](../../build/reference/order-put-functions-in-order.md) .

> [!NOTE]
> Il collegamento non può ordinare le funzioni statiche perché i nomi delle funzioni statiche non sono nomi di simboli pubblici. Quando viene specificato **/Order** , questo avviso del linker viene generato per ogni simbolo nel file di risposta dell'ordine che è statico o non trovato.
