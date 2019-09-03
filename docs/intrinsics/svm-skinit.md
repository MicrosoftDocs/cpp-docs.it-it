---
title: __svm_skinit
ms.date: 09/02/2019
f1_keywords:
- __svm_skinit
helpviewer_keywords:
- SKINIT instruction
- __svm_skinit intrinsic
ms.assetid: 787ec781-4cf2-40a2-aa20-5192334b131a
ms.openlocfilehash: 6657921d647a23bf027a5800702527951f7f6831
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70219861"
---
# <a name="__svm_skinit"></a>__svm_skinit

**Sezione specifica Microsoft**

Avvia il caricamento di software verificatamente sicuro, ad esempio un monitor di macchina virtuale.

## <a name="syntax"></a>Sintassi

```C
void __svm_skinit(
   int block_address
);
```

### <a name="parameters"></a>Parametri

*block_address*\
Indirizzo fisico a 32 bit di un blocco di SLB (64K byte Secure Loader Block).

## <a name="remarks"></a>Note

La funzione `__svm_skinit` è equivalente alle `SKINIT` istruzioni in linguaggio macchina. Questa funzione fa parte di un sistema di sicurezza che usa il processore e un Trusted Platform Module (TPM), per verificare e caricare software attendibile, denominato *kernel di sicurezza* (SK). Un monitoraggio della macchina virtuale è un esempio di un kernel di sicurezza. Il sistema di sicurezza verifica i componenti del programma caricati durante il processo di inizializzazione. Protegge i componenti dalle manomissioni, dall'accesso ai dispositivi o da un altro programma se il computer è un multiprocessore.

Il parametro *block_address* specifica l'indirizzo fisico di un blocco 64K di memoria denominato *blocco del caricatore sicuro* (SLB). SLB contiene un programma denominato *caricatore protetto*. Stabilisce l'ambiente operativo per il computer e quindi carica il kernel di sicurezza.

Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare "AMD64 Architecture Programmer ' s Manual volume 2: Programmazione di sistema "nel sito di [AMD Corporation](https://developer.amd.com/resources/developer-guides-manuals/) .

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__svm_skinit`|x86, x64|

**File di intestazione** \<> intrin. h

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
