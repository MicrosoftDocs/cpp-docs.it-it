---
title: "Marshalling dei parametri degli assembly di interoperabilit&#224; di Visual Studio | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "risoluzione dei problemi relativi agli assembly di interoperabilità di Visual Studio SDK"
  - "assembly di interoperabilità, marshalling dei parametri"
  - "assembly di interoperabilità, risoluzione dei problemi"
ms.assetid: 89123eae-0fef-46d5-bd36-3d2a166b14e3
caps.latest.revision: 24
caps.handback.revision: 24
manager: "douge"
---
# Marshalling dei parametri degli assembly di interoperabilit&#224; di Visual Studio
Vspackage scritta in codice gestito potrebbe essere necessario chiamare o essere chiamato da codice non gestito COM.  In genere, gli argomenti del metodo vengono trasformati, o viene eseguito il marshalling, automaticamente dal gestore di marshalling di interoperabilità.  Talvolta, gli argomenti non possono essere trasformati in modo semplice.  In tali casi, i parametri del prototipo del metodo dell'assembly di interoperabilità vengono utilizzati in base ai parametri della funzione COM quanto più possibile.  Per ulteriori informazioni, vedere [Interop Marshaling](../Topic/Interop%20Marshaling.md).  
  
## suggerimenti generali  
  
##### leggere la documentazione di riferimento  
 Un modo efficace per rilevare i problemi di interoperabilità ne di leggere la documentazione di riferimento per ogni metodo.  
  
 La documentazione di riferimento per ogni metodo contiene tre sezioni importanti:  
  
-   il prototipo di funzione di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] COM.  
  
-   Il prototipo del metodo dell'assembly di interoperabilità.  
  
-   Un elenco di parametri COM e di una breve descrizione di ciascuna di esse.  
  
##### Cercare le differenze tra i due prototipi  
 La maggior parte dei problemi di interoperabilità derivano da mancata corrispondenza tra la definizione di un determinato tipo in un'interfaccia COM e la definizione degli stessi tipi negli assembly di interoperabilità [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] .  Ad esempio, si consideri la differenza nella possibilità di passare un valore di \[out\] `null` in un parametro.  È necessario trovare le differenze tra i due prototipi e considerare le ramificazioni per i dati passati.  
  
##### Leggere le definizioni di parametro.  
 Read the parameter definitions.  COM è meno rigide che Common Language Runtime \(CLR\) su combinare i diversi tipi di dati in un singolo parametro.  Le interfacce COM di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] sfrutta da questa flessibilità.  Qualsiasi parametro che può passare o richiede un valore non standard o tipo di dati, ad esempio un valore costante in un parametro del puntatore, deve essere descritto come tali nella documentazione.  
  
### Oggetti di IUnknown passati come void tipo \*\*  
 Trovare \[out\] i parametri definiti come tipo `void **` nell'interfaccia COM, che tuttavia essere definiti come `[``iid_is``]` nel prototipo del metodo dell'assembly di interoperabilità [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] .  
  
 Talvolta, un'interfaccia COM genera un oggetto di `IUnknown` e le sessioni dell'interfaccia COM quindi come tipo `void **`.  Queste interfacce sono particolarmente importanti poiché se la variabile è definita come \[out\] in IDL, l'oggetto di `IUnknown` riferimento\-è contato con il metodo di `AddRef` .  Una perdita di memoria si verifica se l'oggetto non viene gestito correttamente.  
  
> [!NOTE]
>  Un oggetto di `IUnknown` creato dall'interfaccia COM e restituito \[out\] in una variabile causa una perdita di memoria se in modo esplicito non viene rilasciato.  
  
 I metodi gestiti che gestiscono tali oggetti devono considerare <xref:System.IntPtr> come puntatore a un oggetto di `IUnknown` e chiamano il metodo di <xref:System.Runtime.InteropServices.Marshal.GetObjectForIUnknown%2A> per ottenere l'oggetto.  Il chiamante deve quindi eseguire il cast del valore restituito nel tipo appropriato.  quando l'oggetto non è più necessario, chiamare <xref:System.Runtime.InteropServices.Marshal.Release%2A> per rilasciarlo.  
  
 Di seguito è riportato un esempio di chiamata al metodo di <xref:Microsoft.VisualStudio.Shell.Interop.IVsWindowFrame.QueryViewInterface%2A> e di gestire l'oggetto di `IUnknown` correttamente:  
  
```  
MyClass myclass;  
Object object;  
IntPtr pObj;  
Guid iid = Typeof(MyClass).Guid;  
int hr = windowFrame.QueryViewInterface(ref iid, out pObj);     
if (NativeMethods.Succeeded(hr))   
{  
    try   
    {  
        object = Marshal.GetObjectForIUnknown(pObj);  
        myclass = object;  
    }  
    finally   
    {  
        Marshal.Release(pObj);  
    }  
}  
else   
{  
    // error calling QueryViewInterface  
}  
```  
  
> [!NOTE]
>  I seguenti metodi nelle classi specificate possono essere sottoposti a override per fornire alle istanze delle versioni di ciascuna classe.  Handle them as described in this section.  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectFactory.CreateProject%2A>  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsOwnedProjectFactory.InitializeForOwner%2A>  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsHierarchy.GetNestedHierarchy%2A>  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsSolution.CreateProject%2A>  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsWindowFrame.QueryViewInterface%2A>  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectCfg2.get_CfgType%2A>  
  
### Optional \[out\] Parameters  
 Trovare i parametri definiti come \[out\] tipo di dati \(`int`, `object`e così via, nell'interfaccia COM, ma che sia definito come matrici dello stesso tipo di dati nel prototipo del metodo dell'assembly di interoperabilità [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] .  
  
 Alcune interfacce COM, ad esempio <xref:Microsoft.VisualStudio.Shell.Interop.IVsCfgProvider2.GetCfgs%2A>,  \[out\] vengono esaminati i parametri come facoltativi.  Se un oggetto non è obbligatorio, queste interfacce COM restituisce un puntatore di `null` come valore del parametro anziché creare \[out\] l'oggetto.  Tale comportamento è stato definito in fase di progettazione.  Per queste interfacce, puntatori di `null` vengono considerati come parte del comportamento corretto del package VS e nessun errore viene restituito.  
  
 Poiché il CLR non permette al valore \[out\] di un parametro sia `null`, la parte del comportamento previsto di queste interfacce non è disponibile direttamente nel codice gestito.  I metodi dell'assembly di interoperabilità [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] per il lavoro interessato delle interfacce intorno a definendo i parametri relativi ad esempio matrici in quanto CLR consente il passaggio di matrici di `null` .  
  
 Le implementazioni gestite di questi metodi devono inserire una matrice di `null` nel parametro quando esiste alcuna operazione essere restituito.  In caso contrario, creare una matrice di un elemento del tipo corretto e inserire il valore restituito nella matrice.  
  
 I metodi gestiti che ricevono le informazioni nelle interfacce con parametri facoltativi \[out\] ricevono il parametro come matrice.  Esaminare solo il valore del primo elemento della matrice.  Se non è `null`, considerare il primo elemento come se fosse il parametro originale.  
  
### Passare le costanti nei parametri del puntatore  
 Trovare i parametri definiti come \[in\] puntatori nell'interfaccia COM, ma definiti come <xref:System.IntPtr> digitare nel prototipo del metodo dell'assembly di interoperabilità [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] .  
  
 Una simile problema si verifica quando un'interfaccia COM passa un valore speciale, ad esempio 0, \-1, o \- 2, anziché un puntatore all'oggetto.  A differenza di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)], CLR non consente le costanti per eseguire il cast come oggetti.  Invece, devono essere attivate nel codice.  
  
 Le implementazioni gestite di questi metodi devono utilizzare il fatto che la classe di <xref:System.IntPtr> dispone sia `int` che costruttori di `void *` per creare <xref:System.IntPtr> da un oggetto o una costante Integer, in base alle esigenze.  
  
 I metodi gestiti che ricevono i parametri di <xref:System.IntPtr> di questo tipo devono utilizzare gli operatori di conversione dei tipi di <xref:System.IntPtr> per gestire i risultati.  Innanzitutto convertire <xref:System.IntPtr> a `int` e testarlo rispetto alle costanti Integer rilevanti.  Se nessun valore corrisponde, convertirla in un oggetto del tipo richiesto e continuare.  
  
 For examples of this, see <xref:Microsoft.VisualStudio.Shell.Interop.IVsUIShellOpenDocument.OpenStandardEditor%2A> and <xref:Microsoft.VisualStudio.Shell.Interop.IVsUIShellOpenDocument.OpenSpecificEditor%2A>.  
  
### Valori restituiti da OLE passati come \[out\] parametri  
 Trovare i metodi che hanno un valore restituito di `retval` nell'interfaccia COM, ma che dispongono di un valore restituito di `int` e un parametro matrice aggiuntivo \[out\] nel prototipo del metodo dell'assembly di interoperabilità [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] .  Deve essere chiaro che questi metodi richiedono una gestione speciale in quanto i prototipi del metodo dell'assembly di interoperabilità [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] hanno un nuovo parametro che i metodi dell'interfaccia COM.  
  
 Molte interfacce COM che si occupano di attività OLE inviano le informazioni sullo stato di OLE di nuovo al programma chiamante archiviato nel valore restituito di `retval` dell'interfaccia.  Anziché utilizzare un valore restituito, i metodi corrispondenti dell'assembly di interoperabilità [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] inviano le informazioni di nuovo al programma chiamante archiviato \[out\] in un parametro di matrice.  
  
 Le implementazioni gestite di questi metodi devono creare una matrice a singolo elemento dello stesso tipo \[out\] del parametro e inserirla nel parametro.  Il valore dell'elemento di matrice deve essere uguale al numero appropriato `retval`.  
  
 I metodi gestiti che chiamano le interfacce di questo tipo devono pull il primo elemento \[out\] della matrice.  Questo elemento può essere considerato come se fosse un valore restituito di `retval` dall'interfaccia COM corrispondente.  
  
## Vedere anche  
 [Interop Marshaling](http://msdn.microsoft.com/it-it/a95fdb76-7c0d-409e-a77e-0349b1ea1490)   
 [Interop Marshaling](../Topic/Interop%20Marshaling.md)   
 [Troubleshooting Interoperability](../Topic/Troubleshooting%20Interoperability%20\(Visual%20Basic\).md)   
 [VSPackage gestiti](../misc/managed-vspackages.md)