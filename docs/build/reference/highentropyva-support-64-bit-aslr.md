---
title: /HIGHENTROPYVA (supporta ASLR a 64 bit)
ms.date: 06/12/2018
ms.assetid: fe35f9f7-d28e-4694-9aeb-a79db06168e0
ms.openlocfilehash: 8f8601d89e8456461aac3d91f9fd2cfda216d7f5
ms.sourcegitcommit: 31a443c9998cf5cfbaff00fcf815b133f55b2426
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/14/2020
ms.locfileid: "86373840"
---
# <a name="highentropyva-support-64-bit-aslr"></a>/HIGHENTROPYVA (supporta ASLR a 64 bit)

Specifica se l'immagine eseguibile supporta un'entropia elevata a 64 bit per ASLR (Address Space Layout Randomization).

## <a name="syntax"></a>Sintassi

> **/HIGHENTROPYVA**[**: No**]

## <a name="remarks"></a>Commenti

**/HIGHENTROPYVA** modifica l'intestazione di un' *immagine eseguibile*, un file con estensione dll o exe, per indicare se ASLR può utilizzare l'intero spazio degli indirizzi a 64 bit. Quando questa opzione è impostata su un eseguibile e su tutti i moduli che da esso dipendono, un sistema operativo che supporta ASLR a 64 bit può impostare i segmenti dell'immagine eseguibile in fase di caricamento tramite l'uso di indirizzi causali in uno spazio di indirizzamento virtuale a 64 bit. Questo ampio spazio di indirizzi rende più difficile a un utente non autorizzato indovinare una particolare posizione di un'area della memoria.

Per impostazione predefinita, **/HIGHENTROPYVA** è abilitato per le immagini eseguibili a 64 bit. Questa opzione richiede [/LARGEADDRESSAWARE](largeaddressaware-handle-large-addresses.md), che è anche abilitata per impostazione predefinita per le immagini a 64 bit. **/HIGHENTROPYVA** non è applicabile a immagini eseguibili a 32 bit, in cui il linker ignora l'opzione. Per disabilitare in modo esplicito questa opzione, usare **/HIGHENTROPYVA: No**.

Affinché **/HIGHENTROPYVA** abbia effetto in fase di caricamento, è necessario abilitare anche [/DynamicBase](dynamicbase-use-address-space-layout-randomization.md) . **/DynamicBase** è abilitato per impostazione predefinita ed è necessario per abilitare ASLR in Windows Vista e nei sistemi operativi successivi. Le versioni precedenti di Windows ignorano questo flag.

### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la **Configuration Properties**  >  pagina delle proprietà della riga di comando del**linker**proprietà di configurazione  >  **Command Line** .

1. In **Opzioni aggiuntive**immettere `/HIGHENTROPYVA` o `/HIGHENTROPYVA:NO` .

## <a name="see-also"></a>Vedere anche

- [Informazioni di riferimento sul linker MSVC](linking.md)
- [Opzioni del linker MSVC](linker-options.md)
- [/DYNAMICBASE](dynamicbase-use-address-space-layout-randomization.md)
- [/LARGEADDRESSAWARE](largeaddressaware-handle-large-addresses.md)
- [Difese di sicurezza software ISV di Windows](https://docs.microsoft.com/previous-versions/bb430720(v=msdn.10))
