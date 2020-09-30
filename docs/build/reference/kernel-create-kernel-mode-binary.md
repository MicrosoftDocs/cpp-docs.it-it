---
title: /kernel (Crea file binario in modalità Kernel)
description: L'opzione/kernel del compilatore Microsoft C/C++ compila e collega i progetti per l'esecuzione in modalità kernel.
ms.date: 09/28/2020
f1_keywords:
- /kernel
- /kernel-
ms.assetid: 6d7fdff0-c3d1-4b78-9367-4da588ce8b05
ms.openlocfilehash: 8a8c02a6f102a52afbc52c154ce215ede3f38f74
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91509345"
---
# <a name="kernel-create-kernel-mode-binary"></a>/kernel (Crea file binario in modalità Kernel)

Crea un file binario che può essere eseguito nel kernel di Windows. Il codice nel progetto corrente viene compilato e collegato utilizzando un set semplificato di funzionalità del linguaggio C++ specifiche per il codice eseguito in modalità kernel.

## <a name="syntax"></a>Sintassi

> **`/kernel`**

## <a name="remarks"></a>Osservazioni

**`/kernel`** Se si specifica l'opzione, il compilatore e il linker possono arbitrariare le funzionalità del linguaggio consentite in modalità kernel e assicurarsi di disporre di una potenza espressiva sufficiente per evitare instabilità del runtime univoca per la modalità kernel C++. Questa operazione viene eseguita proibindo l'uso delle funzionalità del linguaggio C++ che interferiscono con la modalità kernel. Il compilatore genera avvisi per le funzionalità del linguaggio C++ potenzialmente dannosi, ma non può essere disabilitato.

L' **`/kernel`** opzione si applica sia alle fasi del compilatore che del linker di una compilazione e viene impostata a livello di progetto. Passare l' **`/kernel`** opzione per indicare al compilatore che il file binario risultante, dopo il collegamento, deve essere caricato nel kernel di Windows. Il compilatore restringerà la gamma di funzionalità del linguaggio C++ a un subset compatibile con il kernel.

Nella tabella seguente sono elencate le modifiche apportate al comportamento del compilatore quando **`/kernel`** si specifica.

| Tipo di comportamento | **`/kernel`** comportamento |
|--|--|
| Gestione delle eccezioni C++ | Disattivato. Tutte le istanze delle **`throw`** parole chiave e generano **`try`** un errore del compilatore (ad eccezione della specifica di eccezione `throw()` ). Nessuna **`/EH`** opzione è compatibile con **`/kernel`** , ad eccezione di **`/EH-`** . |
| RTTI | Disattivato. Tutte le istanze delle **`dynamic_cast`** parole chiave e generano **`typeid`** un errore del compilatore, a meno che non **`dynamic_cast`** venga usato in modo statico. |
| `new` e `delete` | È necessario definire in modo esplicito l' `new()` `delete()` operatore o. Il compilatore e il runtime non forniscono una definizione predefinita. |

[`/GS`](gs-buffer-security-check.md)Quando si usa l'opzione, sono consentite le convenzioni di chiamata personalizzate, l'opzione di compilazione e tutte le ottimizzazioni **`/kernel`** . L'incorporamento non è influenzato da **`/kernel`** , con la stessa semantica rispettata dal compilatore. Per assicurarsi che il **`__forceinline`** qualificatore dell'incorporamento venga rispettato, è necessario assicurarsi che l'avviso [C4714](../../error-messages/compiler-warnings/compiler-warning-level-4-c4714.md) sia abilitato in modo da essere certi quando una particolare **`__forceinline`** funzione non è impostata come inline.

Non esiste alcun `#pragma` equivalente per controllare questa opzione.

Quando al compilatore viene passata l' **`/kernel`** opzione, viene predefinita una macro del preprocessore denominata `_KERNEL_MODE` con il valore **1**. È possibile utilizzare questa macro per compilare in modo condizionale il codice a seconda che l'ambiente di esecuzione sia in modalità utente o in modalità kernel. Il codice seguente, ad esempio, specifica che la `MyNonPagedClass` classe deve trovarsi in un segmento di memoria non paginabile quando viene compilata per l'esecuzione in modalità kernel.

```cpp
#ifdef _KERNEL_MODE
#define NONPAGESECTION __declspec(code_seg("$kerneltext$"))
#else
#define NONPAGESECTION
#endif

class NONPAGESECTION MyNonPagedClass
{
   // ...
};
```

Alcune delle seguenti combinazioni di architettura di destinazione e l' **`/arch`** opzione generano un errore quando vengono usate con **`/kernel`** :

- **`/arch:SSE`**, **`/arch:SSE2`** , **`/arch:AVX`** , **`/arch:AVX2`** e **`/arch:AVX512`** non sono supportati in x86. **`/arch:IA32`** È supportato solo con **`/kernel`** su x86.

- **`/arch:AVX`**, **`/arch:AVX2`** e **`/arch:AVX512`** non sono supportati con **`/kernel`** in x64.

La compilazione con **`/kernel`** passa anche **`/kernel`** al linker. Ecco come l'opzione influisca sul comportamento del linker:

- Il collegamento incrementale è disabilitato. Se si aggiunge **`/incremental`** alla riga di comando, il linker genera questo errore irreversibile:

   **errore irreversibile LNK1295:'/INCREMENTAL ' non è compatibile con la specifica '/kernel '; collegamento senza '/INCREMENTAL '**

- Il linker controlla ogni file oggetto (o qualsiasi membro dell'archivio incluso da librerie statiche) per verificare se potrebbe essere stato compilato usando l' **`/kernel`** opzione ma non è stato. Se le istanze soddisfano questi criteri, il linker collega di nuovo correttamente ma può presentarsi un avviso, come illustrato nella tabella seguente.

   | Comando | **`/kernel`** obj | non **`/kernel`** obj, MASM obj o cvtres obj | Combinazione di **`/kernel`** e non **`/kernel`** obj |
   |--|--|--|--|
   | **`link /kernel`** | Sì | Sì | Sì con avviso LNK4257 |
   | **`link`** | Sì | Sì | Sì |

   **Oggetto di collegamento LNK4257 non compilato con/kernel; l'immagine potrebbe non essere eseguita**

L' **`/kernel`** opzione e l' **`/driver`** opzione operano in modo indipendente. Non hanno alcun effetto su di essi.

### <a name="to-set-the-kernel-compiler-option-in-visual-studio"></a>Impostare l'opzione /kernel del compilatore in Visual Studio

1. Aprire la finestra di dialogo **pagine delle proprietà** per il progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione**proprietà della riga di comando di  >  **c/C++**  >  **Command Line** .

1. Nella casella **Opzioni aggiuntive** aggiungere *`/kernel`* . Scegliere **OK** o **applica** per salvare le modifiche.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)\
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
