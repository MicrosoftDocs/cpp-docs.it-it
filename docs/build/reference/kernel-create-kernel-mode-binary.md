---
title: /kernel (crea file binario in modalità Kernel)
ms.date: 11/04/2016
f1_keywords:
- /kernel
- /kernel-
ms.assetid: 6d7fdff0-c3d1-4b78-9367-4da588ce8b05
ms.openlocfilehash: bcef52144e4da932e9e1b6acbcd5f2170c4c7f86
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87211944"
---
# <a name="kernel-create-kernel-mode-binary"></a>/kernel (crea file binario in modalità Kernel)

Crea un file binario che può essere eseguito nel kernel di Windows.

## <a name="syntax"></a>Sintassi

```
/kernel[-]
```

## <a name="arguments"></a>Argomenti

**/kernel**<br/>
Il codice nel progetto corrente viene compilato e collegato mediante un set di regole del linguaggio C++ specifiche per il codice che verrà eseguito in modalità kernel.

**/kernel**<br/>
Il codice nel progetto corrente viene compilato e collegato senza usare il set di regole del linguaggio C++ specifiche per il codice che verrà eseguito in modalità kernel.

## <a name="remarks"></a>Osservazioni

Non esiste alcun `#pragma` equivalente per controllare questa opzione.

Se si specifica l'opzione **/kernel** , il compilatore e il linker possono arbitrariare le funzionalità del linguaggio consentite in modalità kernel e assicurarsi di disporre di una potenza espressiva sufficiente per evitare l'instabilità del runtime, univoca per la modalità kernel C++. Questa operazione viene eseguita proibendo l'utilizzo delle funzionalità del linguaggio C++ che siano distruttive in modalità kernel e fornendo gli avvisi per le funzionalità del linguaggio C++ che sono potenzialmente dannose ma non possono essere disabilitate.

L'opzione **/kernel** si applica sia alle fasi del compilatore che del linker di una compilazione e viene impostata a livello di progetto. Passare l'opzione **/kernel** per indicare al compilatore che il file binario risultante, dopo il collegamento, deve essere caricato nel kernel di Windows. Il compilatore restringerà la gamma di funzionalità del linguaggio C++ a un subset compatibile con il kernel.

La tabella seguente elenca le modifiche apportate al comportamento del compilatore quando viene specificato **/kernel** .

|Tipo di comportamento|**/kernel** Comportamento|
|-------------------|---------------------------|
|Gestione delle eccezioni C++|Disabilitato. Tutte le istanze delle **`throw`** parole chiave e generano **`try`** un errore del compilatore (ad eccezione della specifica di eccezione `throw()` ). Nessuna opzione **/eh** è compatibile con **/kernel**, ad eccezione di **/eh-**.|
|RTTI|Disabilitato. Tutte le istanze delle **`dynamic_cast`** parole chiave e generano **`typeid`** un errore del compilatore, a meno che non **`dynamic_cast`** venga usato in modo statico.|
|`new` e `delete`|È necessario definire in modo esplicito l'operatore `new()` o `delete()`, né il tipo né il runtime fornirà una definizione predefinita.|

Le convenzioni di chiamata personalizzate, l'opzione di compilazione [/GS](gs-buffer-security-check.md) e tutte le ottimizzazioni sono consentite quando si usa l'opzione **/kernel** . L'incorporamento non è influenzato da **/kernel**, con la stessa semantica rispettata dal compilatore. Per assicurarsi che il **`__forceinline`** qualificatore dell'incorporamento venga rispettato, è necessario assicurarsi che l'avviso [C4714](../../error-messages/compiler-warnings/compiler-warning-level-4-c4714.md) sia abilitato in modo da essere certi quando una particolare **`__forceinline`** funzione non è impostata come inline.

Quando al compilatore viene passata l'opzione **/kernel** , viene predefinita una macro del preprocessore denominata `_KERNEL_MODE` con il valore **1**. È possibile utilizzare questo metodo per compilare in modo condizionale il codice basato sul fatto che l'ambiente di esecuzione sia in modalità utente o in modalità kernel. Ad esempio, il codice seguente specifica che la classe deve trovarsi in un segmento di memoria non divisibile in pagine quando viene compilata per l'esecuzione in modalità kernel.

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

Alcune delle seguenti combinazioni di architettura di destinazione e l'opzione **/Arch** generano un errore quando vengono usate con **/kernel**:

- **/Arch: {SSE&#124;SSE2&#124;AVX}** non sono supportati in x86. Con **/kernel** su x86 è supportato solo **/Arch: IA32** .

- **/Arch: AVX** non è supportato con **/kernel** in x64.

La compilazione con **/kernel** passa anche **/kernel** al linker. Ecco come ciò influisce sul comportamento del linker:

- Il collegamento incrementale è disabilitato. Se si aggiunge **/Incremental** alla riga di comando, il linker genera questo errore irreversibile:

   **LINK: errore irreversibile LNK1295:'/INCREMENTAL ' non è compatibile con la specifica '/kernel '; collegamento senza '/INCREMENTAL '**

- Il linker controlla ogni file oggetto (o qualsiasi membro dell'archivio incluso da librerie statiche) per verificare se potrebbe essere stato compilato usando l'opzione **/kernel** ma non lo è. Se le istanze soddisfano questi criteri, il linker collega di nuovo correttamente ma può presentarsi un avviso, come illustrato nella tabella seguente.

   ||**/kernel** obj|**/kernel-** obj, MASM obj o cvtresed|Combinazione di **/kernel** e **/kernel-** obj|
   |-|----------------------|-----------------------------------------------|-------------------------------------------------|
   |**collegamento /kernel**|Sì|Sì|Sì con avviso LNK4257|
   |**collegamento**|Sì|Sì|Sì|

   **Oggetto di collegamento LNK4257 non compilato con/kernel; l'immagine potrebbe non essere eseguita**

L'opzione **/kernel** e l'opzione **/driver** operano in modo indipendente, né influiscono sull'altro.

### <a name="to-set-the-kernel-compiler-option-in-visual-studio"></a>Impostare l'opzione /kernel del compilatore in Visual Studio

1. Aprire la finestra di dialogo **pagine delle proprietà** per il progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la cartella **C/C++** .

1. Selezionare la pagina delle proprietà **riga di comando** .

1. Nella casella **Opzioni aggiuntive** aggiungere `/kernel` o `/kernel-` .

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
