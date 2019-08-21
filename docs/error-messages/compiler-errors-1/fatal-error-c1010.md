---
title: Errore irreversibile C1010
ms.date: 08/19/2019
f1_keywords:
- C1010
helpviewer_keywords:
- C1010
ms.assetid: dfd035f1-a7a2-40bc-bc92-dc4d7f456767
ms.openlocfilehash: 35b0f60f7eb3be887598e7ffaf3e3eae74aefcff
ms.sourcegitcommit: 9d4ffb8e6e0d70520a1e1a77805785878d445b8a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/20/2019
ms.locfileid: "69630791"
---
# <a name="fatal-error-c1010"></a>Errore irreversibile C1010

fine file imprevista durante la ricerca dell'intestazione precompilata. Si è omesso di aggiungere ' #include name ' all'origine?

Un file di inclusione specificato con [/Yu](../../build/reference/yu-use-precompiled-header-file.md) non è elencato nel file di origine.  Questa opzione è abilitata per impostazione predefinita nella maggior C++ parte dei tipi di progetto di Visual Studio e *PCH. h* (*stdafx. h* in Visual Studio 2017 e versioni precedenti) è il file di inclusione predefinito specificato da questa opzione.

Nell'ambiente Visual Studio usare uno dei metodi seguenti per risolvere l'errore:

- Se non si usano intestazioni precompilate nel progetto, impostare la proprietà **Crea/Usa intestazione** precompilata dei file di origine su **non usare intestazioni**precompilate. Per impostare questa opzione del compilatore, attenersi alla seguente procedura:

   1. Nel riquadro Esplora soluzioni del progetto, fare clic con il pulsante destro del mouse sul nome del progetto, quindi scegliere **Proprietà**.

   1. Nel riquadro sinistro fare clic sulla cartella **C/C++**  .

   1. Fare clic sul nodo **intestazioni** precompilate.

   1. Nel riquadro destro fare clic su **Crea/Usa intestazione**precompilata, quindi fare clic su **non usare intestazioni**precompilate.

- Assicurarsi di non aver eliminato, rinominato o rimosso inavvertitamente il file di intestazione (per impostazione predefinita, stdafx. h) dal progetto corrente. Questo file deve anche essere incluso prima di qualsiasi altro codice nei file di origine usando **#include "stdafx. h"** . (Questo file di intestazione viene specificato come **Crea/Usa PCH tramite** la proprietà del progetto file)