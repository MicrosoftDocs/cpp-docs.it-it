---
title: /DYNAMICBASE
ms.date: 06/12/2018
f1_keywords:
- /dynamicbase
helpviewer_keywords:
- -DYNAMICBASE editbin option
- DYNAMICBASE editbin option
- /DYNAMICBASE editbin option
ms.assetid: edb3df90-7b07-42fb-a94a-f5a4c1d325d6
ms.openlocfilehash: 13987b4ba9c25db0f5417da562ff86f4230937d7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62271827"
---
# <a name="dynamicbase"></a>/DYNAMICBASE

Specifica se generare un'immagine eseguibile che può essere riassegnata in modo casuale in fase di caricamento usando la funzionalità indirizzi dello spazio layout randomization (ASLR) di Windows che prima era disponibile in Windows Vista.

## <a name="syntax"></a>Sintassi

> **/DYNAMICBASE**[**:NO**]

## <a name="remarks"></a>Note

Il **/DYNAMICBASE** opzione Modifica l'intestazione di un *immagine eseguibile*, un file con estensione dll o .exe, per indicare se l'applicazione deve essere riassegnata in modo casuale in fase di caricamento e consente di indirizzo virtuale sequenza casuale di allocazione, che influisce sulla posizione di memoria virtuale dell'heap, stack e altre allocazioni del sistema operativo. Il **/DYNAMICBASE** opzione si applica alle immagini sia a 32 e 64 bit. ASLR è supportato in Windows Vista e sistemi operativi successivi. L'opzione viene ignorata nei sistemi operativi precedenti.

Per impostazione predefinita **/DYNAMICBASE** è abilitata. Per disabilitare questa opzione, usare **/DynamicBase: No**. Il **/DYNAMICBASE** opzione è obbligatoria per il [/HIGHENTROPYVA](highentropyva-support-64-bit-aslr.md) opzione abbia effetto.

## <a name="see-also"></a>Vedere anche

- [Opzioni di EDITBIN](editbin-options.md)
- [Difese di sicurezza Software ISV di Windows](https://msdn.microsoft.com/library/bb430720.aspx)