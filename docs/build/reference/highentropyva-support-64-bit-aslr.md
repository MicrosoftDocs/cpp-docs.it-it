---
title: /HIGHENTROPYVA (supporta ASLR a 64 bit)
ms.date: 06/12/2018
ms.assetid: fe35f9f7-d28e-4694-9aeb-a79db06168e0
ms.openlocfilehash: 5ecbbf8bbd8e74f80f2f5b2d7df0d2ef544112fc
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62291600"
---
# <a name="highentropyva-support-64-bit-aslr"></a>/HIGHENTROPYVA (supporta ASLR a 64 bit)

Specifica se l'immagine eseguibile supporta un'entropia elevata a 64 bit per ASLR (Address Space Layout Randomization).

## <a name="syntax"></a>Sintassi

> **/HIGHENTROPYVA**[**:NO**]

## <a name="remarks"></a>Note

**/ HIGHENTROPYVA** modifica l'intestazione di un *immagine eseguibile*, un file con estensione dll o .exe, per indicare se ASLR può usare lo spazio degli indirizzi di intero a 64 bit. Quando questa opzione è impostata su un eseguibile e su tutti i moduli che da esso dipendono, un sistema operativo che supporta ASLR a 64 bit può impostare i segmenti dell'immagine eseguibile in fase di caricamento tramite l'uso di indirizzi causali in uno spazio di indirizzamento virtuale a 64 bit. Questo ampio spazio di indirizzi rende più difficile a un utente non autorizzato indovinare una particolare posizione di un'area della memoria.

Per impostazione predefinita **/HIGHENTROPYVA** è abilitata per le immagini eseguibili a 64 bit. Questa opzione richiede [/LARGEADDRESSAWARE](largeaddressaware-handle-large-addresses.md), cui è abilitata per impostazione predefinita per le immagini a 64 bit. **/ HIGHENTROPYVA** non è applicabile a immagini eseguibili a 32 bit, in cui il linker ignora l'opzione. Per disabilitare in modo esplicito questa opzione, usare **/highentropyva: No**.

Per la **/HIGHENTROPYVA** per avere un effetto in fase di caricamento [/DYNAMICBASE](dynamicbase-use-address-space-layout-randomization.md) deve anche essere abilitato. **/ DYNAMICBASE** è abilitato per impostazione predefinita e deve abilitare la funzionalità ASLR in Windows Vista e sistemi operativi successivi. Le versioni precedenti di Windows ignorano questo flag.

### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **della riga di comando** pagina delle proprietà.

1. Nelle **opzioni aggiuntive**, immettere `/HIGHENTROPYVA` o `/HIGHENTROPYVA:NO`.

## <a name="see-also"></a>Vedere anche

- [Informazioni di riferimento sul linker MSVC](linking.md)
- [Opzioni del linker MSVC](linker-options.md)
- [/DYNAMICBASE](dynamicbase-use-address-space-layout-randomization.md)
- [/LARGEADDRESSAWARE](largeaddressaware-handle-large-addresses.md)
- [Difese di sicurezza Software ISV di Windows](https://msdn.microsoft.com/library/bb430720.aspx)
