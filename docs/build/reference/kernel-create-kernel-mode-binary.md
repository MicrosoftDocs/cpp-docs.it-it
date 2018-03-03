---
title: "-kernel (creare Kernel modalità binaria) | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /kernel
- /kernel-
dev_langs:
- C++
ms.assetid: 6d7fdff0-c3d1-4b78-9367-4da588ce8b05
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b0e20df59788577acb680cbd18b737f7ec2d7822
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="kernel-create-kernel-mode-binary"></a>/kernel (crea file binario in modalità Kernel)
Crea un file binario che può essere eseguito nel kernel di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/kernel[-]  
```  
  
## <a name="arguments"></a>Argomenti  
 **/kernel**  
 Il codice nel progetto corrente viene compilato e collegato mediante un set di regole del linguaggio C++ specifiche per il codice che verrà eseguito in modalità kernel.  
  
 **/kernel-**  
 Il codice nel progetto corrente viene compilato e collegato senza usare il set di regole del linguaggio C++ specifiche per il codice che verrà eseguito in modalità kernel.  
  
## <a name="remarks"></a>Note  
 Non esiste alcun `#pragma` equivalente a questa opzione di controllo.  
  
 Specifica il **/kernel** opzione indica al compilatore e nel linker di arbitrare le funzionalità del linguaggio sono consentite in modalità kernel e assicurarsi che si potenza espressiva sia sufficiente per evitare instabilità del runtime di valore univoco in modalità kernel C++. Questa operazione viene eseguita proibendo l'utilizzo delle funzionalità del linguaggio C++ che siano distruttive in modalità kernel e fornendo gli avvisi per le funzionalità del linguaggio C++ che sono potenzialmente dannose ma non possono essere disabilitate.  
  
 Il **/kernel** opzione si applica alle fasi di una compilazione il compilatore e del linker e viene impostato a livello di progetto. Passare il **/kernel** commutatore per indicare al compilatore che il file binario risultante, dopo il collegamento, deve essere caricato nel kernel di Windows. Il compilatore restringerà la gamma di funzionalità del linguaggio C++ a un subset compatibile con il kernel.  
  
 Nella tabella seguente elenca le modifiche nel comportamento del compilatore quando **/kernel** specificato.  
  
|Tipo di comportamento|**/kernel** comportamento|  
|-------------------|---------------------------|  
|Gestione delle eccezioni C++|Disabilitato. Tutte le istanze delle parole chiave `throw` e `try` generano un errore di compilazione (ad eccezione della specifica di eccezione `throw()`). Non **/EH** sono compatibili con le opzioni **/kernel**, ad eccezione di **/EH-**.|  
|RTTI|Disabilitato. Tutte le istanze delle parole chiave `dynamic_cast` e `typeid` generano un errore del compilatore, a meno che `dynamic_cast` venga utilizzata in modo statico.|  
|`new` e `delete`|È necessario definire in modo esplicito l'operatore `new()` o `delete()`, né il tipo né il runtime fornirà una definizione predefinita.|  
  
 Le convenzioni di chiamata personalizzate il [/GS](../../build/reference/gs-buffer-security-check.md) opzione di compilazione e tutte le ottimizzazioni sono consentite quando si utilizza il **/kernel** opzione. L'inline in gran parte non è interessato dalla **/kernel**, con la stessa semantica rispettata dal compilatore. Se si desidera assicurarsi che il `__forceinline` qualificatore di inline viene rispettata, è necessario assicurarsi che l'avviso [C4714](../../error-messages/compiler-warnings/compiler-warning-level-4-c4714.md) è abilitata in modo da sapere quando una particolare `__forceinline` funzione non resa inline.  
  
 Quando viene passato al compilatore di **/kernel** switch, viene predefinita una macro del preprocessore denominata `_KERNEL_MODE` e ha il valore **1**. È possibile utilizzare questo metodo per compilare in modo condizionale il codice basato sul fatto che l'ambiente di esecuzione sia in modalità utente o in modalità kernel. Ad esempio, il codice seguente specifica che la classe deve trovarsi in un segmento di memoria non divisibile in pagine quando viene compilata per l'esecuzione in modalità kernel.  
  
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
  
 Alcuni seguenti combinazioni di architettura di destinazione e **/arch** opzione generano un errore quando vengono utilizzati con **/kernel**:  
  
-   **/arch: {SSE &#124; SSE2 &#124; AVX}** non sono supportate in x86. Solo **/arch:IA32** è supportato con **/kernel** x86.  
  
-   **/arch: AVX** non è supportato con **/kernel** su x64.  
  
 Compilazione con **/kernel** passa anche **/kernel** al linker. Ecco come ciò influisce sul comportamento del linker:  
  
-   Il collegamento incrementale è disabilitato. Se si aggiungono **/INCREMENTAL** alla riga di comando, il linker genera questo errore irreversibile:  
  
     **LINK: errore irreversibile LNK1295: '/ INCREMENTALE' non è compatibile con ' / KERNEL' specifica. collegamento senza '/ INCREMENTALE'**  
  
-   Il linker controlla ogni file oggetto (o qualsiasi membro archivio incluso da librerie statiche) per vedere se Impossibile sono stato compilato utilizzando il **/kernel** opzione ma non è stata. Se le istanze soddisfano questi criteri, il linker collega di nuovo correttamente ma può presentarsi un avviso, come illustrato nella tabella seguente.  
  
    ||**/kernel** obj|**/kernel-** obj, MASM obj o cvtresed|Combinazione di **/kernel** e **/kernel-** objs|  
    |-|----------------------|-----------------------------------------------|-------------------------------------------------|  
    |**collegamento /kernel**|Yes|Yes|Sì con avviso LNK4257|  
    |**collegamento**|Yes|Sì|Yes|  
  
     **Oggetto a collegamento LNK4257 non è stato compilato con /KERNEL; immagine non può essere eseguita**  
  
 Il **/kernel** opzione e **/driver** opzione funzionano in modo indipendente e nessuna delle due influisce su altra.  
  
### <a name="to-set-the-kernel-compiler-option-in-visual-studio"></a>Impostare l'opzione /kernel del compilatore in Visual Studio  
  
1.  Aprire il **pagine delle proprietà** la finestra di dialogo per il progetto. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **C/C++** cartella.  
  
3.  Selezionare il **riga di comando** pagina delle proprietà.  
  
4.  Nel **opzioni aggiuntive** aggiungere `/kernel` o `/kernel-`.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)