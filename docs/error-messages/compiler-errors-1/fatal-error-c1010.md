---
title: Errore irreversibile C1010
ms.date: 11/04/2016
f1_keywords:
- C1010
helpviewer_keywords:
- C1010
ms.assetid: dfd035f1-a7a2-40bc-bc92-dc4d7f456767
ms.openlocfilehash: 6974f0d82653203973be50b5ea709bd9487a215f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50575812"
---
# <a name="fatal-error-c1010"></a>Errore irreversibile C1010

fine file imprevista durante la ricerca dell'intestazione precompilata. Si è omesso di aggiungere ' #include name' per l'origine?

Specificato con un file di inclusione [/Yu](../../build/reference/yu-use-precompiled-header-file.md) non è elencato nel file di origine.  Questa opzione è abilitata per impostazione predefinita nella maggior parte dei tipi di progetto Visual C++ e "stdafx. h" è l'impostazione predefinita includono file specificato da questa opzione.

Nell'ambiente di Visual Studio, usare uno dei metodi seguenti per risolvere questo errore:

- Se si usa intestazioni precompilate non nel progetto, impostare il **Crea/Usa intestazione precompilata** proprietà del file di origine **senza intestazioni precompilate**. Per impostare questa opzione del compilatore, seguire questa procedura:

   1. Nel riquadro Esplora soluzioni del progetto, fare clic sul nome del progetto e quindi fare clic su **proprietà**.

   1. Nel riquadro a sinistra, scegliere il **C/C++** cartella.

   1. Scegliere il **intestazioni precompilate** nodo.

   1. Nel riquadro di destra, fare clic su **Crea/Usa intestazione precompilata**, quindi fare clic su **senza intestazioni precompilate**.

- Assicurarsi che sono stati non inavvertitamente eliminato, rinominati o rimossi file di intestazione (per impostazione predefinita, stdafx. h) dal progetto corrente. Questo file deve anche essere inclusi prima di qualsiasi altro codice nei file di origine usando **#includere "stdafx. h"**. (Questo file di intestazione viene specificato come **Crea/Usa PCH tramite File** proprietà del progetto)