---
title: /HIGHENTROPYVA (supporta ASLR a 64 bit)
ms.date: 06/12/2018
ms.assetid: fe35f9f7-d28e-4694-9aeb-a79db06168e0
ms.openlocfilehash: ead296b1bd31171fb1a187685f407f6a0cf8a74c
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88835025"
---
# <a name="highentropyva-support-64-bit-aslr"></a>/HIGHENTROPYVA (supporta ASLR a 64 bit)

Specifica se l'immagine eseguibile supporta un'entropia elevata a 64 bit per ASLR (Address Space Layout Randomization).

## <a name="syntax"></a>Sintassi

> **`/HIGHENTROPYVA`**[**`:NO`**]

## <a name="remarks"></a>Osservazioni

**`/HIGHENTROPYVA`** modifica l'intestazione di un file di *immagine eseguibile* (ad esempio, un *`.dll`* *`.exe`* file o) per indicare se ASLR può usare l'intero spazio degli indirizzi a 64 bit.  Per avere un effetto, impostare l'opzione sul file eseguibile e su tutti i moduli da cui dipende. Quindi, un sistema operativo che supporta ASLR a 64 bit può ribasare i segmenti dell'immagine eseguibile in fase di caricamento usando indirizzi virtuali casuali a 64 bit. Questo ampio spazio di indirizzi rende più difficile a un utente non autorizzato indovinare una particolare posizione di un'area della memoria.

Per impostazione predefinita, **`/HIGHENTROPYVA`** è abilitato per le immagini eseguibili a 64 bit. Questa opzione richiede [`/LARGEADDRESSAWARE`](largeaddressaware-handle-large-addresses.md) , che è anche abilitata per impostazione predefinita per le immagini a 64 bit. **`/HIGHENTROPYVA`** non è applicabile a immagini eseguibili a 32 bit, in cui il linker ignora l'opzione. Per disabilitare in modo esplicito questa opzione, usare **`/HIGHENTROPYVA:NO`** .

Per **`/HIGHENTROPYVA`** avere un effetto in fase di caricamento, [`/DYNAMICBASE`](dynamicbase-use-address-space-layout-randomization.md) è necessario abilitare anche. **`/DYNAMICBASE`** è abilitato per impostazione predefinita ed è necessario per abilitare ASLR in Windows Vista e nei sistemi operativi successivi. Le versioni precedenti di Windows ignorano questo flag.

### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la **Configuration Properties**  >  pagina delle proprietà della riga di comando del**linker**proprietà di configurazione  >  **Command Line** .

1. In **Opzioni aggiuntive**immettere `/HIGHENTROPYVA` o `/HIGHENTROPYVA:NO` .

## <a name="see-also"></a>Vedere anche

- [Informazioni di riferimento sul linker MSVC](linking.md)
- [Opzioni del linker MSVC](linker-options.md)
- [`/DYNAMICBASE`](dynamicbase-use-address-space-layout-randomization.md)
- [`/LARGEADDRESSAWARE`](largeaddressaware-handle-large-addresses.md)
- [Difese di sicurezza software ISV di Windows](/previous-versions/bb430720(v=msdn.10))
