---
title: -Os -/Ot (Ottimizza per dimensione codice, Ottimizza per velocità codice) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLWCECompilerTool.FavorSizeOrSpeed
- /os
- VC.Project.VCCLCompilerTool.FavorSizeOrSpeed
dev_langs:
- C++
helpviewer_keywords:
- favor fast code compiler option [C++]
- /Os compiler option [C++]
- Ot compiler option [C++]
- /Ot compiler option [C++]
- small machine code
- -Ot compiler option [C++]
- fast code
- favor small code compiler option [C++]
- Os compiler option [C++]
- -Os compiler option [C++]
ms.assetid: 9a340806-fa15-4308-892c-355d83cac0f2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9f97ab0a53eb82b65149ea0f27139743e065f7ea
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32378909"
---
# <a name="os-ot-favor-small-code-favor-fast-code"></a>/Os, /Ot (Ottimizza per dimensione codice, Ottimizza per velocità codice)
Riduce a icona o ingrandita le dimensioni del file exe e DLL.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Os  
/Ot  
```  
  
## <a name="remarks"></a>Note  
 **/OS** (Ottimizza per dimensione codice) riduce al minimo le dimensioni dei file exe e DLL indicando al compilatore di privilegiare la velocità di dimensione. Il compilatore può ridurre molti costrutti C e C++ per le sequenze simili a livello funzionale del codice macchina. In alcuni casi queste differenze rappresentano un compromesso tra la dimensione e velocità. Il **/Os** e **/Ot** opzioni consentono di specificare una preferenza per uno di essi:  
  
 **/Ot** (Ottimizza per velocità codice) ottimizza la velocità di exe e DLL indicando al compilatore di privilegiare velocità dimensioni. (Questo è il valore predefinito). Il compilatore può ridurre molti costrutti C e C++ per le sequenze simili a livello funzionale del codice macchina. In alcuni casi, queste differenze rappresentano un compromesso tra la dimensione e velocità. L'opzione /Ot implicito Ottimizza velocità ([/O2](../../build/reference/o1-o2-minimize-size-maximize-speed.md)) opzione. Il **/O2** opzione combina diverse opzioni per produrre codice molto veloce.  
  
 Se si utilizza **/Os** o **/Ot**, è necessario specificare anche [/Og](../../build/reference/og-global-optimizations.md) per ottimizzare il codice.  
  
> [!NOTE]
>  Le informazioni raccolte durante le esecuzioni dei test di profilatura sostituiranno le ottimizzazioni che verrebbero altrimenti applicate se si specifica **/Ob**, **/Os**, o **/Ot**. Per ulteriori informazioni, [ottimizzazioni PGO](../../build/reference/profile-guided-optimizations.md).  
  
 **x86 specifico**  
  
 Esempio di codice seguente viene illustrata la differenza tra l'Ottimizza per dimensione codice (**/Os**) opzioni e Ottimizza per velocità codice (**/Ot**) opzione:  
  
> [!NOTE]
>  Di seguito viene descritto il comportamento previsto quando si utilizza **/Os** o **/Ot**. Tuttavia, il comportamento del compilatore può comportare da versioni diverse ottimizzazioni per il codice riportato di seguito.  
  
```  
/* differ.c  
  This program implements a multiplication operator  
  Compile with /Os to implement multiply explicitly as multiply.  
  Compile with /Ot to implement as a series of shift and LEA instructions.  
*/  
int differ(int x)  
{  
    return x * 71;  
}  
```  
  
 Come illustrato nel frammento di codice macchina riportato di seguito, quando DIFFER per dimensioni (**/Os**), il compilatore implementa il moltiplicare l'espressione nell'istruzione return in modo esplicito come un per produrre una sequenza di codice breve ma più lenta:  
  
```  
mov    eax, DWORD PTR _x$[ebp]  
imul   eax, 71                  ; 00000047H  
```  
  
 In alternativa, quando DIFFER per la velocità di (**/Ot**), il compilatore implementa l'espressione nell'istruzione return come una serie di MAIUSC multiply e `LEA` istruzioni per produrre una sequenza, ma più veloce del codice:  
  
```  
mov    eax, DWORD PTR _x$[ebp]  
mov    ecx, eax  
shl    eax, 3  
lea    eax, DWORD PTR [eax+eax*8]  
sub    eax, ecx  
```  
  
 **FINE x86 specifico**  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic su di **ottimizzazione** pagina delle proprietà.  
  
4.  Modificare il **Ottimizza per dimensione o velocità** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.FavorSizeOrSpeed%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni /O (Ottimizza codice)](../../build/reference/o-options-optimize-code.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)