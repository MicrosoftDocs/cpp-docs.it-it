---
title: "/H (Limita la lunghezza dei nomi esterni) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/h"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/H (opzione del compilatore) [C++]"
  - "nomi esterni"
  - "H (opzione del compilatore) [C++]"
  - "-H (opzione del compilatore) [C++]"
  - "nomi pubblici (lunghezza)"
ms.assetid: de701dd3-ed04-4c88-8195-960d2520ec2e
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /H (Limita la lunghezza dei nomi esterni)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Limita la lunghezza dei nomi esterni.  
  
## Sintassi  
  
```  
/Hnumber  
```  
  
## Argomenti  
 `number`  
 Specifica la lunghezza massima dei nomi esterni consentita in un programma.  
  
## Note  
 Per impostazione predefinita, la lunghezza dei nomi esterni \(pubblici\) è pari a 2.047 caratteri.  Questo limite è valido per i programmi C e C\+\+.  L'utilizzo di **\/H** consente di ridurre la lunghezza massima consentita degli identificatori, ma non di aumentarla.  Uno spazio tra **\/H** e `number` è facoltativo.  
  
 Se un programma contiene nomi esterni più lunghi di `number`, i caratteri supplementari verranno ignorati.  Se si compila un programma senza **\/H** e se un identificatore contiene più di 2.047 caratteri, verrà generato [Errore irreversibile C1064](../../error-messages/compiler-errors-1/fatal-error-c1064.md).  
  
 Il limite di lunghezza include qualsiasi carattere di sottolineatura \(\_\) o simbolo di chiocciola \(@\) iniziale creato dal compilatore.  Tali caratteri fanno parte dell'identificatore e assumono una posizione significativa.  
  
-   Il compilatore aggiunge un carattere di sottolineatura \(\_\) iniziale ai nomi modificati dalle convenzioni di chiamata `__cdecl` \(predefinita\) e `__stdcall` e un simbolo di chiocciola \(@\) iniziale ai nomi modificati dalla convenzione di chiamata `__fastcall`.  
  
-   Il compilatore aggiunge informazioni sulla dimensione degli argomenti ai nomi modificati dalle convenzioni di chiamata `__fastcall` e `__stdcall` e aggiunge informazioni sui tipi ai nomi C\+\+.  
  
 L'opzione **\/H** può essere utile nei casi riportati di seguito:  
  
-   Quando si creano programmi dal linguaggio misto o portabili.  
  
-   Quando si utilizzano strumenti che impongono dei limiti alla lunghezza degli identificatori esterni.  
  
-   Quando si desidera limitare la quantità di spazio utilizzata dai simboli in una build di debug.  
  
 Nell'esempio riportato di seguito viene illustrato in che modo l'utilizzo di **\/H** può comportare errori se le lunghezze degli identificatori presentano limiti eccessivamente restrittivi:  
  
```  
// compiler_option_H.cpp  
// compile with: /H5  
// processor: x86  
// LNK2005 expected  
void func1(void);  
void func2(void);  
  
int main() { func1(); }  
  
void func1(void) {}  
void func2(void) {}  
```  
  
 È inoltre necessario utilizzare con cautela l'opzione **\/H** a causa degli identificatori del compilatore predefiniti.  Se la lunghezza massima dell'identificatore è troppo limitata, alcuni identificatori predefiniti non verranno risolti così come alcune chiamate di funzione della libreria.  Se, ad esempio, viene utilizzata la funzione `printf` e in fase di compilazione si specifica l'opzione **\/H5**, verrà creato il simbolo **\_prin** per fare riferimento a `printf` ma quest'ultimo non verrà trovato nella libreria.  
  
 L'utilizzo di **\/H** non è compatibile con [\/GL \(Ottimizzazione intero programma\)](../../build/reference/gl-whole-program-optimization.md).  
  
 L'opzione **\/H** è deprecata; dal momento che i limiti di lunghezza massima sono stati aumentati, **\/H** non è più necessaria.  Per ulteriori informazioni, vedere [Deprecated Compiler Options in Visual C\+\+ 2005](http://msdn.microsoft.com/it-it/aa59fce3-50b8-4f66-9aeb-ce09a7a84cce).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)