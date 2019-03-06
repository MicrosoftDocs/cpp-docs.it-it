---
title: /kernel (crea file binario in modalità Kernel)
ms.date: 11/04/2016
f1_keywords:
- /kernel
- /kernel-
ms.assetid: 6d7fdff0-c3d1-4b78-9367-4da588ce8b05
ms.openlocfilehash: 33a0f4019d8ad278f5850c499ee552ee72279455
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57414755"
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

**/kernel-**<br/>
Il codice nel progetto corrente viene compilato e collegato senza usare il set di regole del linguaggio C++ specifiche per il codice che verrà eseguito in modalità kernel.

## <a name="remarks"></a>Note

È presente alcun `#pragma` equivalente per controllare questa opzione.

Specifica la **/kernel** opzione indica al compilatore e nel linker di arbitrare le funzionalità del linguaggio sono consentite in modalità kernel e assicurarsi che si potenza espressiva sia sufficiente per evitare l'instabilità del runtime che è univoco per modalità kernel C++. Questa operazione viene eseguita proibendo l'utilizzo delle funzionalità del linguaggio C++ che siano distruttive in modalità kernel e fornendo gli avvisi per le funzionalità del linguaggio C++ che sono potenzialmente dannose ma non possono essere disabilitate.

Il **/kernel** opzione si applica il compilatore e linker nelle fasi di una compilazione e viene impostato a livello di progetto. Passare il **/kernel** switch per indicare al compilatore che il file binario risultante, dopo il collegamento, deve essere caricato nel kernel Windows. Il compilatore restringerà la gamma di funzionalità del linguaggio C++ a un subset compatibile con il kernel.

La tabella seguente elenca le modifiche nel comportamento del compilatore quando **/kernel** è specificato.

|Tipo di comportamento|**/kernel** comportamento|
|-------------------|---------------------------|
|Gestione delle eccezioni C++|Disabilitato. Tutte le istanze delle parole chiave `throw` e `try` generano un errore di compilazione (ad eccezione della specifica di eccezione `throw()`). No **/EH** le opzioni sono compatibili con **/kernel**, ad eccezione di **/EH-**.|
|RTTI|Disabilitato. Tutte le istanze delle parole chiave `dynamic_cast` e `typeid` generano un errore del compilatore, a meno che `dynamic_cast` venga utilizzata in modo statico.|
|`new` e `delete`|È necessario definire in modo esplicito l'operatore `new()` o `delete()`, né il tipo né il runtime fornirà una definizione predefinita.|

Custom convenzioni di chiamata, il [/GS](../../build/reference/gs-buffer-security-check.md) opzione di compilazione e tutte le ottimizzazioni sono consentite quando si utilizza il **/kernel** opzione. L'inline in gran parte non è influenzato **/kernel**, con la stessa semantica rispettata dal compilatore. Se si desidera assicurarsi che il `__forceinline` qualificatore di inline è rispettato, è necessario assicurarsi che l'avviso [C4714](../../error-messages/compiler-warnings/compiler-warning-level-4-c4714.md) è abilitata in modo da sapere quando una particolare `__forceinline` funzione non resa inline.

Quando viene passato al compilatore il **/kernel** switch, viene predefinita una macro del preprocessore denominata `_KERNEL_MODE` e ha il valore **1**. È possibile utilizzare questo metodo per compilare in modo condizionale il codice basato sul fatto che l'ambiente di esecuzione sia in modalità utente o in modalità kernel. Ad esempio, il codice seguente specifica che la classe deve trovarsi in un segmento di memoria non divisibile in pagine quando viene compilata per l'esecuzione in modalità kernel.

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

Alcuni seguenti combinazioni di architettura di destinazione e il **/arch** opzione genera un errore quando vengono usati con **/kernel**:

- **/arch: {SSE&#124;SSE2&#124;AVX}** non sono supportati in x86. Solo **/arch:IA32** è supportato con **/kernel** x86.

- **/arch: AVX** non è supportato con **/kernel** su x64.

Compilazione con **/kernel** passa inoltre **/kernel** al linker. Ecco come ciò influisce sul comportamento del linker:

- Il collegamento incrementale è disabilitato. Se si aggiungono **/INCREMENTAL** alla riga di comando, il linker genera questo errore irreversibile:

   **LINK: errore irreversibile LNK1295: '/ INCREMENTALE' non è compatibile con ' / KERNEL' specifica; collegamento senza '/ INCREMENTALE'**

- Il linker controlla ogni file oggetto (o qualsiasi membro archivio incluso da librerie statiche) per vedere se Impossibile sono stato compilato usando il **/kernel** opzione ma non era. Se le istanze soddisfano questi criteri, il linker collega di nuovo correttamente ma può presentarsi un avviso, come illustrato nella tabella seguente.

   ||**/kernel** obj|**/kernel-** obj, MASM obj o cvtresed|Garantirebbe **/kernel** e **/kernel-** obj|
   |-|----------------------|-----------------------------------------------|-------------------------------------------------|
   |**link /kernel**|Sì|Sì|Sì con avviso LNK4257|
   |**link**|Sì|Yes|Sì|

   **Oggetto a collegamento LNK4257 non compilato con /KERNEL; immagine non venga eseguita**

Il **/kernel** opzione e il **/driver** opzione funzionano in modo indipendente e nessuna delle due influisce su altra.

### <a name="to-set-the-kernel-compiler-option-in-visual-studio"></a>Impostare l'opzione /kernel del compilatore in Visual Studio

1. Aprire il **pagine delle proprietà** finestra di dialogo per il progetto. Per altre informazioni, vedere [Uso delle proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **C/C++** cartella.

1. Selezionare il **riga di comando** pagina delle proprietà.

1. Nel **opzioni aggiuntive** , aggiungere `/kernel` o `/kernel-`.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
